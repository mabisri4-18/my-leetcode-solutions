// ======================================
// LeetCode Problem: binary tree maximum path sum
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/
// Synced by: LinkCode
// Date: 11/12/2026, 3:19:15 PM
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
    int maxi = INT_MIN;
    int func(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int l = max(0,func(root->left));
        int r = max(0,func(root->right));
        maxi = max(maxi,l+r+root->val);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        func(root);
        return maxi;
    }
};