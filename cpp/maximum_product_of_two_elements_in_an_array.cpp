// ======================================
// LeetCode Problem: maximum product of two elements in an array
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// Synced by: LinkCode
// Date: 10/29/2026, 11:39:45 PM
// ======================================


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int first = 0,second = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>first)
            {
                second = first;
                first = nums[i];
            }
            else if(nums[i]<=first && nums[i]>second)
            {
                second = nums[i];
            }
        }
        int val = (second-1)*(first-1);
        return val;
    }
};