// ======================================
// LeetCode Problem: find the minimum and maximum number of nodes between critical points
// Language: cpp
// Link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/
// Synced by: LinkCode
// Date: 9/1/2026, 1:00:40 PM
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = prev->next;
        int cnt = 1;
        vector<int>ans;
        if(curr->next==nullptr)
        {
            return {-1,-1};
        }
        while(curr->next!=nullptr)
        {
            cnt = cnt+1;
            ListNode* Next = curr->next;
            if(curr->val < prev->val && curr->val < Next->val)
            {
                ans.push_back(cnt);
            }
            else if(curr->val > prev->val && curr->val > Next->val)
            {
                ans.push_back(cnt);
            }
            prev = curr;
            curr = prev->next;
        }
        int mini = INT_MAX;
        int maxi = -1;
        int n = ans.size();
        if(n<2)
        {
            return {-1,-1};
        }
        if(n>2)
        {
            maxi = ans[n-1] - ans[0];
            for(int i=0;i<n-1;i++)
            {
                mini = min(mini,ans[i+1]-ans[i]);
            }
        }
        else if(n==2)
        {
            mini = ans[n-1] - ans[n-2];
            maxi = ans[n-1] - ans[n-2];
        }
        return {mini,maxi};
    }
};