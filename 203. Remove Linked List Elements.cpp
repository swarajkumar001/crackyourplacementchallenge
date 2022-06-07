/*203. Remove Linked List Elements
Easy

5095

167

Add to List

Share
Given the head of a linked list and an integer val, remove all 
the nodes of the linked list that has Node.val == val, and return the new head.

 

Example 1:


Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:

Input: head = [], val = 1
Output: []
Example 3:

Input: head = [7,7,7,7], val = 7
Output: []
 

Constraints:

The number of nodes in the list is in the range [0, 104].
1 <= Node.val <= 50
0 <= val <= 50*/


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
    ListNode* removeElements(ListNode* head, int val) {
         if(head== NULL){
             return head;
         }
           
        // if(head->val==val){
        //     ListNode* head1=head;
        //     head=head->next;
        //     delete head1;
        //     //return head;
        // }
        while(head!=NULL && head->val==val){
            head = head->next;
        }
        
        ListNode*temp=head;
        
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==val){
                 ListNode*del=temp->next;
                temp->next= temp->next->next;
                delete del;
                
            }
            else{
                temp=temp->next;
            }
            
        }
        return head;
        
        
        
        
        
        
        
    }
};
