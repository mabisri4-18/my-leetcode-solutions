// ======================================
// LeetCode Problem: sort colors
// Language: cpp
// Link: https://leetcode.com/problems/sort-colors/
// Synced by: LinkCode
// Date: 10/29/2026, 11:50:14 PM
// ======================================


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0,two = n-1;
        int move = 0;
        while(move<=two)
        {
            if(nums[move]==2)
            {
                swap(nums[move],nums[two]);
                two--;
            }
            else if(nums[move]==1)
            {
                move++;
            }
            else if(nums[move]==0)
            {
                swap(nums[move],nums[zero]);
                move++;zero++;
            }
        }
    }
};