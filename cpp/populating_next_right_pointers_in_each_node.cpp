// ======================================
// LeetCode Problem: populating next right pointers in each node
// Language: cpp
// Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
// Synced by: LinkCode
// Date: 11/12/2026, 7:42:43 PM
// ======================================


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)
        {
            return root;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        { 
            int n = q.size();
            Node* temp = nullptr;
            for(int i=0;i<n;i++)
            {
                Node* curr = q.front();q.pop();
                if(temp!=nullptr)
                {
                    temp->next = curr;
                }
                temp = curr;
                if(curr->left!=nullptr)
                {
                    q.push(curr->left);
                }
                if(curr->right!=nullptr)
                {
                    q.push(curr->right);
                }
            }
            temp->next = nullptr;
        }
        return root;
    }
};