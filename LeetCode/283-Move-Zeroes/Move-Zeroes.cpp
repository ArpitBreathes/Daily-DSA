/*
Problem : 283. Move Zeroes

Platform : LeetCode

Difficulty : Easy

Topic : Arrays, Two Pointers

Time Complexity : O(n)

Space Complexity : O(1)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        for(i=0;i<n;i++){
            if(nums[i]==0) break;
        }

        for(j=i+1;j<n;j++){
            if(j>n-1) return;
            if(nums[j]!=0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
        }

    }
};