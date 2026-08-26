// ======================================
// LeetCode Problem: 3sum
// Language: cpp
// Link: https://leetcode.com/problems/3sum/
// Synced by: LinkCode
// Date: 8/26/2026, 8:33:07 PM
// ======================================


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>result;
        vector<int>ans;
        for(int i=0;i<n-2;i++)
        {
            int r = i+1,k=n-1;
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            while(r<k)
            {
                int val = nums[i]+nums[r]+nums[k];
                if(val==0)
                {
                    result.push_back({nums[i],nums[r],nums[k]});
                    r++,k--;
                    while(r < k && nums[r] == nums[r - 1])
                        r++;

                    while(r < k && nums[k] == nums[k + 1])
                        k--;
                }
                else if(val<0)
                {
                    r++;
                }
                else if(val>0)
                {
                    k--;
                }
               // result.push_back(ans);
            }
        }
        return result;
    }
};