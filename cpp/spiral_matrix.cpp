// ======================================
// LeetCode Problem: spiral matrix
// Language: cpp
// Link: https://leetcode.com/problems/spiral-matrix/
// Synced by: LinkCode
// Date: 8/25/2026, 5:15:15 PM
// ======================================


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0,bottom = n-1;
        int left = 0,right = m-1;
        vector<int>ans;
        while(top<=bottom && left<=right)
        {
            for(int l=left;l<=right;l++)
            {
                ans.push_back(matrix[top][l]);
            }
            top++;

            for(int t=top;t<=bottom;t++)
            {
                ans.push_back(matrix[t][right]);
            }
            right--;

            if(top<=bottom)
            {
                for(int r=right;r>=left;r--)
                {
                    ans.push_back(matrix[bottom][r]);
                }
                bottom--;
            }
            if(left<=right){
                for(int b=bottom;b>=top;b--)
                {
                    ans.push_back(matrix[b][left]);
                }
                left++;
            }
        }
        return ans;
    }
};