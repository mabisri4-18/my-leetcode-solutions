// ======================================
// LeetCode Problem: maximum subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-subarray/
// Synced by: LinkCode
// Date: 8/23/2026, 11:40:13 PM
// ======================================


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0],maxi=nums[0];
        for(int i=1;i<n;i++)
        {
            sum = max(nums[i],sum+nums[i]);                           
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};