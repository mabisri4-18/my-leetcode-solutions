// ======================================
// LeetCode Problem: binary tree maximum path sum
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/
// Synced by: LinkCode
// Date: 9/1/2026, 9:26:33 PM
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
        maxi = max(root->val+l+r,maxi);
        return max(l,r)+root->val;

    }
    int maxPathSum(TreeNode* root) {
        func(root);
        return maxi;
    }
};