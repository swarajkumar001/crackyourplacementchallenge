/*206. Reverse Linked List
Easy

12250

213

Add to List

Share
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000*/

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
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*current=head;
        ListNode*next1=head->next;
        ListNode*pre=NULL;
        
        while(current!=NULL){
            
            if(next1==NULL){
                 current->next=pre;
            pre=current;
            current=next1;
            //next1=next1->next;
            }
            else{
                current->next=pre;
            pre=current;
            current=next1;
            next1=next1->next;
            }
            
        }
        return pre;
        
        
        
        
        
        
        
    }
};
 
