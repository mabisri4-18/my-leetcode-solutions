// ======================================
// LeetCode Problem: smallest stable index ii
// Language: cpp
// Link: https://leetcode.com/problems/smallest-stable-index-ii/
// Synced by: LinkCode
// Date: 9/5/2026, 8:22:04 PM
// ======================================


class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suf(n);
        suf[n-1] = nums[n-1];
        int maxi = nums[0];
        int mini = INT_MIN;
        for(int i=n-2;i>=0;i--)
        {
            suf[i] = min(suf[i+1],nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,nums[i]);
            int ans = maxi-suf[i];
            if(ans<=k)
            {
                return i;
            }
        }
        return -1;
    }
};