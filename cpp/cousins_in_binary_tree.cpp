// ======================================
// LeetCode Problem: cousins in binary tree
// Language: cpp
// Link: https://leetcode.com/problems/cousins-in-binary-tree/
// Synced by: LinkCode
// Date: 11/13/2026, 3:04:49 PM
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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==nullptr)
        {
            return false;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        { 
            bool gotX = false;
            bool gotY = false;
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();q.pop();
                if(curr->left!=nullptr && curr->right!=nullptr)
                {
                    if((curr->left->val==x && curr->right->val==y )||(curr->left->val==y && curr->right->val==x))
                    {
                        return false;
                    }
                }
                if(curr->left!=nullptr)
                {
                    if(curr->left->val==x)
                    {
                        gotX = true;
                    }
                    if(curr->left->val==y)
                    {
                        gotY = true;
                    }
                    q.push(curr->left);
                }
                if(curr->right!=nullptr)
                {
                    if(curr->right->val == x)
                    {
                        gotX = true;
                    }
                    if(curr->right->val == y)
                    {
                        gotY = true;
                    }
                    q.push(curr->right);
                }
            }
            if(gotX==true && gotY==true)
            {
                return true;
            }
        }
        return false;
    }
};