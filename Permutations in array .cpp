/*Permutations in array 
Basic Accuracy: 77.93% Submissions: 3919 Points: 1
Given two arrays of equal size N and an integer K. The 
task is to check if after permuting both arrays, we get sum of their 
corresponding element greater than or equal to k i.e Ai + Bi >= K for 
all i (from 0 to N-1). Return true if possible, else false.
 

Example 1:

Input : 
a[] = {2, 1, 3}, 
b[] = { 7, 8, 9 }, 
k = 10. 
Output : 
True
Explanation:
Permutation  a[] = { 1, 2, 3 } 
and b[] = { 9, 8, 7 } 
satisfied the condition a[i] + b[i] >= K.


 

Example 2:

Input : 
a[] = {1, 2, 2, 1}, b[] = { 3, 3, 3, 4 }, k = 5.
Output : 
False
Explanation:
Since any permutation won't give the answer.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete
 the function isPossible() which takes the array A[], B[], its size N and 
 an integer K as inputs and returns the answer.

Expected Time Complexity: O(N. Log(N))
Expected Auxiliary Space: O(1)
 

Constraints:
1 = N = 105
1 = K = 1018*/


//CODE 


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
 #include <bits/stdc++.h>
class Solution {
   
  public:
    bool isPossible(long long a[], long long b[], long long n, long long k) {
        // Your code goes here
        
        // next_permutation(a.begin(), a.end());
        // next_permutation(b.begin(), b.end());
        
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        
        // for(int i=0,j=n-1;i<n;i++,j--){
        //   int temp=b[i] ;
        //   b[i]=b[j];
        //   b[j]=temp;
            
        // }
        
        
        for(int i=0;i<n;i++){
            
            if(a[i]+b[i]<k){
                return false ;
            }
        }
        
        return true;
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
