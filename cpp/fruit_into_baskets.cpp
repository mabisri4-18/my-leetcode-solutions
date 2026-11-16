// ======================================
// LeetCode Problem: fruit into baskets
// Language: cpp
// Link: https://leetcode.com/problems/fruit-into-baskets/
// Synced by: LinkCode
// Date: 11/16/2026, 11:48:30 PM
// ======================================


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0;
        unordered_map<int,int>seen;
        int maxi = 0;
        for(int r=0;r<n;r++)
        {
            seen[fruits[r]]++;
            if(seen.size()>2)
            {
                seen[fruits[l]]--;
                if(seen[fruits[l]]==0)
                {
                    seen.erase(fruits[l]);
                }
                l++;
            }
            maxi = max(maxi,r-l+1);
        }
        return maxi;
    }
};