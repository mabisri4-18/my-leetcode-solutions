// ======================================
// LeetCode Problem: subtree of another tree
// Language: cpp
// Link: https://leetcode.com/problems/subtree-of-another-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 12:49:55 AM
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
    bool func(TreeNode* root,TreeNode* subRoot)
    {
        if(root==nullptr && subRoot==nullptr)
        {
            return true;
        }
        else if(root==nullptr || subRoot==nullptr)
        {
            return false;
        }
        return root->val==subRoot->val && func(root->left,subRoot->left) && func(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr)
            return true;
        if(root == nullptr)
            return false;
        if(func(root,subRoot))
        {
            return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};