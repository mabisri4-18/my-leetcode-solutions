// ======================================
// LeetCode Problem: subarray sum equals k
// Language: cpp
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Synced by: LinkCode
// Date: 11/17/2026, 1:53:07 PM
// ======================================


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int sum = 0,rem = 0,cnt = 0;
        for(int r=0;r<n;r++)
        {
            sum += nums[r];
            rem = sum - k;
            if(mpp.find(rem)!=mpp.end())
            {
                cnt += mpp[rem];
            }
            mpp[sum]++;
        }
        return cnt;   
    }
};