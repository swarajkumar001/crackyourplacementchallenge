/*19. Remove Nth Node From End of List
Medium

10383

491

Add to List

Share
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 

Follow up: Could you do this in one pass?

*/

/// CODE 

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
int length1(ListNode *head)
{
     //Write your code here
    
    int count=0;
    ListNode *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
    
    }


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
          int length=length1(head);
        
        
        if(head==NULL){
            return head;
        }
        if(n==0||n>length){
            return head;
            
        }
        
        if(n==length){
            ListNode *temp3=head;
            head=head->next;
                delete temp3;
            return head;
        }
        
             int m=length -n;
        
        ListNode *temp=head;
        ListNode *temp2=NULL;
        
        
      int count=0;
        while(temp!=NULL){
            if(count==m-1){
                break;
            }
            temp=temp->next;
            count++;
        }
        ListNode *a=temp->next;
        ListNode *b=a->next;
        temp->next=b;
        delete a;
        
        return head;
        
        
        
   
        
        
     
        
        
        
        
    }
};
