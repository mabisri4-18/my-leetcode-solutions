// ======================================
// LeetCode Problem: minimum depth of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 12:25:59 AM
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
    int func(TreeNode* root)
    {
        if(root==nullptr){
            return 0;
        }
        int l = func(root->left);
        int r = func(root->right);
        if(l==0)
        {
            return r+1;
        }
        else if(r==0)
        {
            return l+1;
        }
        return min(l,r)+1;
    }
    int minDepth(TreeNode* root) {
        return func(root);
    }
};