// ======================================
// LeetCode Problem: merge sorted array
// Language: cpp
// Link: https://leetcode.com/problems/merge-sorted-array/
// Synced by: LinkCode
// Date: 10/30/2026, 12:30:42 PM
// ======================================


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m+n-1;
        int i = m-1,j = n-1;
        while(i>=0 && j>=0)
        {
            if(k>=0 && nums1[i]<nums2[j])
            {
                nums1[k] = nums2[j];
                j--;
            }
            else
            {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }
        while(j>=0)
        {
            if(k>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
            }
        }
    }
};