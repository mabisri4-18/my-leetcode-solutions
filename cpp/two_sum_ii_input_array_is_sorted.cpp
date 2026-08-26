// ======================================
// LeetCode Problem: two sum ii input array is sorted
// Language: cpp
// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Synced by: LinkCode
// Date: 8/26/2026, 8:23:14 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<numbers.size();i++)
        {
            int t = target-numbers[i];//9-2 = 7
            if(mpp.find(t)!=mpp.end())
            {
                return {mpp[t]+1,i+1};
            }
            else{
            mpp[numbers[i]] = i;
            }
        }
        return {};
    }
};