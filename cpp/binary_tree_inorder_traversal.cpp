// ======================================
// LeetCode Problem: binary tree inorder traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
// Synced by: LinkCode
// Date: 11/11/2026, 10:24:05 PM
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
    void func(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        func(root->left);
        ans.push_back(root->val);
        func(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
       func(root);
       return ans;
    }
};