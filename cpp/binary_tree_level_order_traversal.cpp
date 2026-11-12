// ======================================
// LeetCode Problem: binary tree level order traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-level-order-traversal/
// Synced by: LinkCode
// Date: 11/12/2026, 6:25:22 PM
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
        vector<vector<int>>res;
    void func(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
       // vector<int>row;
        queue<TreeNode*>q;
        q.push(root);
        //row.push_back(root->val);
        while(!q.empty())
        { 
            int n = q.size();
            vector<int>row;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();q.pop();
                row.push_back(curr->val);
                if(curr->left!=nullptr)
                {
                    q.push(curr->left);
                   // row.push_back(curr->val);
                }
                if(curr->right!=nullptr)
                {
                    q.push(curr->right);
                    //row.push_back(curr->val);
                }
            }
            res.push_back(row);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        func(root);
        return res;
    }
};