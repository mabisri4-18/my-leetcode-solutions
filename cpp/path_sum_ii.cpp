// ======================================
// LeetCode Problem: path sum ii
// Language: cpp
// Link: https://leetcode.com/problems/path-sum-ii/
// Synced by: LinkCode
// Date: 11/12/2026, 1:21:50 AM
// ======================================


class Solution {
public:
    vector<vector<int>> res;
    vector<int> ans;
    void func(TreeNode* root, int sum)
    {
        if(root == nullptr)
        {
            return;
        }
        ans.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr)
        {
            if(sum == root->val)
            {
                res.push_back(ans);
            }
            ans.pop_back();
            return;
        }
        func(root->left, sum - root->val);
        func(root->right, sum - root->val);
        ans.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        // res.clear();
        // ans.clear();
        func(root, targetSum);
        return res;
    }
};