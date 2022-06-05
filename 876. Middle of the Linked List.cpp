/*8876. Middle of the Linked List
Easy

5516

139

Add to List

Share
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Constraints:

The number of nodes in the list is in the range [1, 100].
1 <= Node.val <= 100*/

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

   int length(ListNode *head)
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
    ListNode* middleNode(ListNode* head) {
        
        int n=length(head);
        if(head==NULL){
            return head;
        }
        if(n==1){
            return head;
        }
        
        int count=0;
        ListNode*temp=head;
        ListNode*temp1=NULL;
        
        while(temp!=NULL){
            if(count==(n/2)-1){
                temp1=temp->next;
                break;
            }
            temp=temp->next;
            count++;
        }
        
        return temp1;
    }
};
