// ======================================
// LeetCode Problem: maximum absolute sum of any subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 3:25:16 PM
// ======================================


class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int currMax = 0,maxi = nums[0];
        int currMin = 0,mini = nums[0];
        for(int n:nums)
        {
            currMax = max(currMax+n , n);
            maxi = max(maxi,currMax);

            currMin = min(currMin+n , n);
            mini = min(mini,currMin);
        }
        return max(maxi,abs(mini));
    }
};