// ======================================
// LeetCode Problem: majority element ii
// Language: cpp
// Link: https://leetcode.com/problems/majority-element-ii/
// Synced by: LinkCode
// Date: 8/30/2026, 11:22:59 PM
// ======================================


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1, ele2;
        for(int i=0;i<n;i++)
        {
            if(cnt1==0 && nums[i]!=ele2)
            {
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 && nums[i]!=ele1)
            {
                ele2 = nums[i];
                cnt2 = 1;
            }
            else if(nums[i]==ele1)
            {
                cnt1++;
            }
            else if(nums[i]==ele2)
            {
                cnt2++;
            }
            else
            {
                cnt1--,cnt2--;
            }
        }
        int c1 = 0,c2 = 0;
        for(int i=0;i<n;i++)
        {
            if(ele1==nums[i])
            {
                c1++;
            }
            else if(ele2==nums[i]){
                c2++;
            }
        }
        int val = (int)n/3+1;
        vector<int>ans;
        if(c1>=val)
        {
            ans.push_back(ele1);
        }
        if(ele2!=ele1 && c2>=val)
        {
            ans.push_back(ele2);
        }

        return ans;
    }
};