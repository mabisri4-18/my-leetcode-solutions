// ======================================
// LeetCode Problem: add two numbers
// Language: cpp
// Link: https://leetcode.com/problems/add-two-numbers/
// Synced by: LinkCode
// Date: 8/20/2026, 2:21:52 PM
// ======================================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr=dummy;
        int carry = 0;
        while(t1!=NULL||t2!=NULL)
        {
            int sum = carry;
            if(t1!=NULL)
            {
                sum = sum+t1->val;
                t1=t1->next;
            }
            if(t2!=NULL)
            {
                sum = sum+t2->val;
                t2=t2->next;
            }
            ListNode* newNode =new ListNode(sum%10);
            curr->next=newNode;
            curr=curr->next;
            carry=sum/10;
        }
        if(carry)
            {
                ListNode* carr =new  ListNode(carry);
                curr->next = carr;
            }
        return dummy->next;
    }
};