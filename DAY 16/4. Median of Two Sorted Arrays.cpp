/*Given two sorted arrays nums1 and nums2 of size m and n respectively, 
return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106*/

//CODE 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector <int>v;
        int size1=nums1.size();
         int size2=nums2.size();
           int i,j;
        double Median=0.0;
        
        
        for(i=0,j=0;i<size1&&j<size2;){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
            if(i==size1){
                while(j<size2){
                    v.push_back(nums2[j]);
                j++;
                }
            }
                
            if(j==size2){
                while(i<size1){
                    v.push_back(nums1[i]);
                     i++;
                }
            }
                
                
            
          
        
        int n=v.size();
        // cout<<n<<endl;
        // cout<<v[0]<<endl;
        // cout<<v[1]<<endl;
        // cout<<v[2]<<endl;
        // cout<<v[3]<<endl;
        
        
        
        
        if(n%2==0){
            int r1=v[n/2];
            int r2=v[(n-2)/2];
            Median=(r1+r2)/2.000000;
        }
        
        else{
            Median=v[(n-1)/2];
        }
        
        return Median;
            
            
            
        
        
        
    }
};
