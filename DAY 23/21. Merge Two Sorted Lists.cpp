/*21. Merge Two Sorted Lists
Easy

12593

1145

Add to List

Share
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together
 the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.*/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* t3=NULL;
        ListNode* finallist=NULL;
        
        while(t1!=NULL && t2!=NULL){
            if(t1->val<=t2->val){
                if(t3==NULL){
                    ListNode* newnode=new ListNode(t1->val);
                    finallist=newnode;
                   // t1->next=newnode;
                    t3=newnode;
                    t3->next=NULL;
                    
                    
                }
                else{
                    ListNode* newnode=new ListNode(t1->val);
                    
                    t3->next=newnode;
                    t3=newnode;
                }
                t1=t1->next;
                
            }
            else{
                if(t3==NULL){
                    ListNode* newnode=new ListNode(t2->val);
                    finallist=newnode;
                    //t1->next=newnode;
                    t3=newnode;
                    t3->next=NULL;
                    
                    
                }
                else{
                    ListNode* newnode=new ListNode(t2->val);
                  
                    t3->next=newnode;
                    t3=newnode;
                }
                t2=t2->next;
            }
        }
        
        if(t1==NULL){
            while(t2!=NULL){
                   ListNode* newnode=new ListNode(t2->val);
                  
                    t3->next=newnode;
                    t3=newnode;
                    t2=t2->next;
            }
        }
        if(t2==NULL){
            while(t1!=NULL){
                   ListNode* newnode=new ListNode(t1->val);
                   t3->next=newnode;
                    t3=newnode;
                    t1=t1->next;
            }
        }
        return finallist;
           
    }
};
