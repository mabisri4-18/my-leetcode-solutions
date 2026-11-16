// ======================================
// LeetCode Problem: maximum sum of distinct subarrays with length k
// Language: cpp
// Link: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
// Synced by: LinkCode
// Date: 11/16/2026, 10:56:35 PM
// ======================================


class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mpp;
        int l = 0;
        long long sum = 0, maxi = 0;
        for(int r=0;r<n;r++)
        {
            sum += nums[r];
            mpp[nums[r]]++;
            if(mpp.size()>k || mpp[nums[r]]>1)
            {
                while(mpp.size()>k||mpp[nums[r]]>1)
                {
                    mpp[nums[l]]--;
                    if(mpp[nums[l]]==0)
                    {
                        mpp.erase(nums[l]);
                    }
                    sum -= nums[l];
                    l++;
                }
            }
            if(r-l+1 == k)
            {
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
};