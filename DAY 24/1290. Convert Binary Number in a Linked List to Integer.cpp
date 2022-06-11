/*1290. Convert Binary Number in a Linked List to Integer
Easy

2614

129

Add to List

Share
Given head which is a reference node to a singly-linked list. 
The value of each node in the linked list is either 0 or 1. 
The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

 

Example 1:


Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
Example 2:

Input: head = [0]
Output: 0
 

Constraints:

The Linked List is not empty.
Number of nodes will not exceed 30.
Each node's value is either 0 or 1.*/

// CODE 

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

ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
      ListNode*ans=  reverseList( head->next);
      
         ListNode*temp=ans;
        
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        head->next=NULL;
        return ans;    
    }


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        ListNode *temp= reverseList(head);
        int num=0; 
        int i=0;
        while(temp!=NULL){
            num=num+(temp->val)*pow(2,i);
            i++;
            temp=temp->next;
        }
        return num;
        
    }
};
