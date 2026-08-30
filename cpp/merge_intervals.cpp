// ======================================
// LeetCode Problem: merge intervals
// Language: cpp
// Link: https://leetcode.com/problems/merge-intervals/
// Synced by: LinkCode
// Date: 8/31/2026, 12:06:17 AM
// ======================================


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>merge;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            if(merge.empty())
            {
                merge.push_back(intervals[i]);
            }
            else if(merge.back()[1]>=intervals[i][0])
            {
                merge.back()[1] = max(merge.back()[1],intervals[i][1]);
            }
            else if(merge.back()[1]<intervals[i][0])
            {
                merge.push_back(intervals[i]);
            }
        }
        return merge;
    }
};