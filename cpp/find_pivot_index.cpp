// ======================================
// LeetCode Problem: find pivot index
// Language: cpp
// Link: https://leetcode.com/problems/find-pivot-index/
// Synced by: LinkCode
// Date: 11/17/2026, 2:23:23 PM
// ======================================


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        // vector<int>pre(n);
        // vector<int>suf(n);
        // pre[0] = nums[0];
        // for(int i=1;i<n;i++)
        // {
        //     pre[i] = pre[i-1]+nums[i];
        // }
        // suf[n-1] = nums[n-1];
        // for(int i=n-2;i>=0;i--)
        // {
        //     suf[i] = suf[i+1]+nums[i];
        // }
        // for(int i=0;i<n;i++)
        // {
        //     int left =+ 0,right = 0;
        //     if(i>0)
        //     {
        //         left = pre[i-1];
        //     }
        //     if(i<n-1)
        //     {
        //         right = suf[i+1];
        //     }
        //     if(left == right)
        //     {
        //         return i;
        //     }
        // }
        // return -1;
        int left = 0;
        int right = 0;
        int total = 0;
        for(int i=0;i<n;i++)
        {
            total += nums[i];
        }
        for(int i=0;i<n;i++)
        {
            right = total - nums[i] - left;
            if(left==right)
            {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};