// ======================================
// LeetCode Problem: kth smallest element in a bst
// Language: cpp
// Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// Synced by: LinkCode
// Date: 9/1/2026, 4:39:53 PM
// ======================================


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    void find(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        find(root->left);
        ans.push_back(root->val);
        find(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        find(root);
        return ans[k-1];
    }
};