// ======================================
// LeetCode Problem: maximum subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 2:42:01 PM
// ======================================


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int sum = nums[0];
        for(int r=1;r<n;r++)
        {
            if(sum+nums[r]>nums[r])
            {
                sum += nums[r];
            }
            else
            {
                sum = nums[r];
                //st = r;
            }
            if(sum>maxi)
            {
                maxi = sum;
                //end = r;
                //ans = st;
            }
        }
        return maxi;
    }
};