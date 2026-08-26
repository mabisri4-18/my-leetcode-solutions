// ======================================
// LeetCode Problem: move zeroes
// Language: cpp
// Link: https://leetcode.com/problems/move-zeroes/
// Synced by: LinkCode
// Date: 8/26/2026, 8:16:19 PM
// ======================================


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zero =-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                zero = i;
                break;
            }
        }
        if(zero==-1)return -1;
        for(int i=zero+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[zero]);
                zero++;
            }
        }
    }
};