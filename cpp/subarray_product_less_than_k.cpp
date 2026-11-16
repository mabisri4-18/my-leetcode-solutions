// ======================================
// LeetCode Problem: subarray product less than k
// Language: cpp
// Link: https://leetcode.com/problems/subarray-product-less-than-k/
// Synced by: LinkCode
// Date: 11/16/2026, 11:19:57 PM
// ======================================


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int n = nums.size();
        int l = 0,pro = 1,ans = 0;
        for(int r=0;r<n;r++)
        {
            pro *= nums[r];
            while(pro>=k)
            {
                pro /= nums[l];
                l++;
            }
            ans += r-l+1;
        }
        return ans;
    }
};