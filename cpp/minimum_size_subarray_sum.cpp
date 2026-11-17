// ======================================
// LeetCode Problem: minimum size subarray sum
// Language: cpp
// Link: https://leetcode.com/problems/minimum-size-subarray-sum/
// Synced by: LinkCode
// Date: 11/17/2026, 1:36:49 PM
// ======================================


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0,sum = 0,mini = INT_MAX;
        for(int r=0;r<n;r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                mini = min(r-l+1,mini);
                sum -= nums[l];
                l++;
            }
        }
        return mini==INT_MAX? 0:mini;
    }
};