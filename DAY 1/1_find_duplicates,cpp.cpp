/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
 

Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.*/



// CODE



class Solution {
   #include <bits/stdc++.h>
public:
    //#include <algorithm>
  
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int r;
        
        sort(nums.begin(), nums.end());
        //sort(nums,nums+n);
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                r=nums[i];
                break;
            }
        }
        return r;
        
        
//         int sum1=(n*(n-1))/2;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//         }
//         return sum-sum1;
        
    }
    
    
};
 
