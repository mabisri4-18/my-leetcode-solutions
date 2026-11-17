// ======================================
// LeetCode Problem: maximum subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 2:26:56 PM
// ======================================


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0],maxi = nums[0];
        for(int i=1;i<n;i++)
        {
            if(sum<0)
            {
                sum = 0;
            }
            sum += nums[i];
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};