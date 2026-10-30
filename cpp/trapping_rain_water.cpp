// ======================================
// LeetCode Problem: trapping rain water
// Language: cpp
// Link: https://leetcode.com/problems/trapping-rain-water/
// Synced by: LinkCode
// Date: 10/30/2026, 1:53:52 PM
// ======================================


class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmax = 0,rmax = 0;
        int l = 0,r = n-1,ans = 0;
        while(l<=r)
        {
            if(lmax<rmax)
            {
                if(lmax>height[l])
                {
                    ans+=lmax-height[l];
                }
                else
                {
                    lmax = height[l];
                }
                l++;
            }
            else
            {
                if(rmax>height[r])
                {
                    ans+=rmax-height[r];
                }
                else
                {
                    rmax = height[r];
                }
                r--;
            }
        }
        return ans;
    }
};