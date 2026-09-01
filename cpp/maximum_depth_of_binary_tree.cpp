// ======================================
// LeetCode Problem: maximum depth of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Synced by: LinkCode
// Date: 9/1/2026, 5:00:04 PM
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
    int maxi = 0;
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        maxi = max(l,r)+1;
        return maxi;
    }
};