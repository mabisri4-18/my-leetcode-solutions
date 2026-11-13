// ======================================
// LeetCode Problem: search in a binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/search-in-a-binary-search-tree/
// Synced by: LinkCode
// Date: 11/13/2026, 3:30:53 PM
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
    bool func(TreeNode* root, int val,TreeNode* &node)
    {
        if(root==nullptr)
        {
            return false;
        }
        if(root->val == val)
        {
            node = root;
            return true;
        }
        if(root->val > val)
        {
            return func(root->left,val,node);
        }
        else
        {
            return func(root->right,val,node);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr)
        {
            return root;
        }
        if(root->val == val)
        {
            return root;
        }
        if(val < root->val)
        {
            return searchBST(root->left,val);
        }
        else
        {
            return searchBST(root->right,val);
        }
    }
};