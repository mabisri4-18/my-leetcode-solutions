// ======================================
// LeetCode Problem: max consecutive ones iii
// Language: cpp
// Link: https://leetcode.com/problems/max-consecutive-ones-iii/
// Synced by: LinkCode
// Date: 11/16/2026, 11:12:53 PM
// ======================================


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        vector<int>seen(2);
        int maxi = 0;
        for(int r=0;r<n;r++)
        {
            seen[nums[r]]++;
            while(seen[0]>k)
            {
                seen[nums[l]]--;
                l++;
            }
            maxi = max(maxi,r-l+1);
        }
        return maxi;
    }
};