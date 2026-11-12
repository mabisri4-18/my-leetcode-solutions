// ======================================
// LeetCode Problem: binary tree right side view
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-right-side-view/
// Synced by: LinkCode
// Date: 11/12/2026, 7:15:54 PM
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
    // bool isLeaf(TreeNode* root)
    // {
    //     return root!=nullptr && root->left==nullptr && 
    // }
    void func(TreeNode* root,vector<int>& ans)
    {
        map<int,int>mpp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            auto curr = q.front();q.pop();
            TreeNode* node = curr.first;
            int level = curr.second;
            mpp[level] = node->val;
            if(node->left != nullptr)
            {
                q.push({node->left,level+1});
            }
            if(node->right != nullptr)
            {
                q.push({node->right,level+1});
            }
        }
        for(auto ele:mpp)
        {
            ans.push_back(ele.second);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)
        {
            return {};
        }
        func(root,ans);
        return ans;
    }
};