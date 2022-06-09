/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lower-case English letters.*/

//code 


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0){
            return "";
        }
        string s1=strs[0];
        
        for(int i=1;i<strs.size();i++){
            
            int j=0;
            string current=strs[i];
            
            while(j<s1.size()&&current.size()&&s1[j]==current[j]){
                
                j++;
                
                
            }
            if(j==0){
                return "";
            }
            
           s1=current.substr(0,j);
            
        }
        
        return s1;
    }
};
