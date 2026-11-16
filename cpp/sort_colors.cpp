// ======================================
// LeetCode Problem: sort colors
// Language: cpp
// Link: https://leetcode.com/problems/sort-colors/
// Synced by: LinkCode
// Date: 11/16/2026, 10:27:50 PM
// ======================================


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int m = 0;
        int z = 0, t = n-1;
        while(m<=t)
        {
            if(nums[m]==2)
            {
                swap(nums[m],nums[t]);
                t--;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else if(nums[m]==0)
            {
                swap(nums[z],nums[m]);
                z++;
                m++;
            }
        }
    }
};