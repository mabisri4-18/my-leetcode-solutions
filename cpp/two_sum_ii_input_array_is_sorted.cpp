// ======================================
// LeetCode Problem: two sum ii input array is sorted
// Language: cpp
// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Synced by: LinkCode
// Date: 11/16/2026, 9:55:24 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<numbers.size();i++)
        {
            int val = target - numbers[i];
            if(mpp.find(val)!=mpp.end())
            {
                return {mpp[val]+1,i+1};
            }
            mpp[numbers[i]] = i;
        }
        return {};
    }
};