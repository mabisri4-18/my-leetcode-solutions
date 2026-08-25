// ======================================
// LeetCode Problem: longest consecutive sequence
// Language: cpp
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Synced by: LinkCode
// Date: 8/25/2026, 2:37:08 PM
// ======================================


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int n:nums)
        {
            st.insert(n);
        }
        int maxi = 0;
        for(int num:st)
        {
            if(st.find(num-1)==st.end())
            {
                int val = num;
                int cnt = 1;
                while(st.find(val+1)!=st.end())
                {
                    val = val+1;
                    cnt++;
                }
                maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};