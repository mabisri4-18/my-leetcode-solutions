// ======================================
// LeetCode Problem: lowest common ancestor of a binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 8:39:20 PM
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root==nullptr)
        {
            return root;
        }
        if(root==p||root==q)
        {
            return root;
        }
        TreeNode* l = lowestCommonAncestor(root->left,p,q);
        TreeNode* r = lowestCommonAncestor(root->right,p,q);
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
};