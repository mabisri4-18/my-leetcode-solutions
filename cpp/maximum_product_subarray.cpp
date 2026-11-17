// ======================================
// LeetCode Problem: maximum product subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 2:53:05 PM
// ======================================


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pre = 1;
        int suff = 1;
        int ans = 0,maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(pre==0)
            {
                pre = 1;
            }
            if(suff==0)
            {
                suff = 1;
            }
            pre = pre*nums[i];
            suff = suff*nums[n-i-1];
            ans = max(pre,suff);
            maxi = max(ans,maxi);
        }
        return maxi;
    }
};