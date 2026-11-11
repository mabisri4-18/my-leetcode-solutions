// ======================================
// LeetCode Problem: diameter of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/diameter-of-binary-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 11:51:24 PM
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
    int maxi = 0,ans = 0;
    int diameter(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int l = diameter(root->left);
        int r = diameter(root->right);
        ans = max(ans,l+r);
        maxi = max(l,r)+1;
        return maxi;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return ans;
    }
};