// ======================================
// LeetCode Problem: path sum iii
// Language: cpp
// Link: https://leetcode.com/problems/path-sum-iii/
// Synced by: LinkCode
// Date: 11/12/2026, 2:59:49 PM
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
    int cnt = 0;
    void func(TreeNode* root,long long sum,int target)
    {
        if(root==nullptr)
        {
            return;
        }
        sum += root->val;
        if(sum==target)
        {
            cnt++;
        }
        func(root->left,sum,target);
        func(root->right,sum,target);
    }
    void fromAllPath(TreeNode* root,int target)
    {
        if(root==nullptr)
        {
            return;
        }
        func(root,0,target);
        fromAllPath(root->left,target);
        fromAllPath(root->right,target);
    }
    int pathSum(TreeNode* root, int targetSum) {
        fromAllPath(root,targetSum);
        return cnt;
    }
};