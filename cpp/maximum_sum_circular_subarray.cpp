// ======================================
// LeetCode Problem: maximum sum circular subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-sum-circular-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 3:23:33 PM
// ======================================


class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currMaxi = 0,currMini = 0;
        int maxi = nums[0], mini = nums[0];
        int total = 0;
        for(int num:nums)
        {
            total += num;

            currMaxi = max(currMaxi+num,num);
            maxi = max(maxi,currMaxi);

            currMini = min(currMini+num, num);
            mini = min(mini,currMini);
        }
       if(maxi<0)
       {
        return maxi;
       }
       else
       {
         return max(maxi,total-mini);
       }
    }
};