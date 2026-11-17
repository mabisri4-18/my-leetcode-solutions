// ======================================
// LeetCode Problem: maximum product subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 2:51:04 PM
// ======================================


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pro = 1,mini = INT_MAX,maxi = INT_MIN;
        for(int r=0;r<n;r++)
        {
            pro *= nums[r];
            mini = min(pro,mini);
            maxi = max(pro,maxi);
        }
        return max(mini,maxi);
    }
};