/*234. Palindrome Linked List
Easy

9132

563

Add to List

Share
Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9*/

//CODE 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
    
    #include <vector>
    //using namespace std;
    #include <bits/stdc++.h>
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
            
        }
        
        ListNode*temp=head;
        vector<int>v1;
           vector<int>v2;
        
      while(temp!=NULL){
        v1.push_back(temp->val);
        v2.push_back(temp->val);
        temp=temp->next;
    }
   // int n=length(v1);
    
    reverse(v1.begin(),v1.end());
    return v1==v2;
        
        
    }
};
 
