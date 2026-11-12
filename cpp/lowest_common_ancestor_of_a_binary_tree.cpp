// ======================================
// LeetCode Problem: lowest common ancestor of a binary tree
// Language: cpp
// Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 8:30:44 PM
// ======================================


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* func(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(root==nullptr)
        {
            return root;
        }
        if(root==p||root==q)
        {
            return root;
        }
        TreeNode* l = func(root->left,p,q);
        TreeNode* r = func(root->right,p,q);
        if(l!=nullptr && r!=nullptr)
        {
            return root;
        }
        else if(l!=nullptr)
        {
            return l;
        }
        else
        {
            return r;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return func(root,p,q);
    }
};