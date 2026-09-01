// ======================================
// LeetCode Problem: kth smallest element in a bst
// Language: cpp
// Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// Synced by: LinkCode
// Date: 9/1/2026, 4:49:47 PM
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
    int cnt = 0,ans = 0;
    void find(TreeNode* root,int k)
    {
        if(root==nullptr)
        {
            return;
        }
        find(root->left,k);
        cnt++;
        if(cnt==k)
        {
            ans = root->val;
            return;
        }
        find(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        find(root,k);
        return ans;
    }
};