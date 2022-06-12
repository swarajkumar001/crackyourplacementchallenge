/*148. Sort List
Medium

7277

235

Add to List

Share
Given the head of a linked list, return the list after sorting it in ascending order.

 

Example 1:


Input: head = [4,2,1,3]
Output: [1,2,3,4]
Example 2:


Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is in the range [0, 5 * 104].
-105 <= Node.val <= 105
 

Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?*/

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
    ListNode* sortList(ListNode* head) {
        
        
        if(head==NULL){
            return head;
        }
        vector<int>v;
        
         ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        
        
        int i=0;
//         cout<<v[0]<<endl;
//         cout<<v[1]<<endl;
//         cout<<v[2]<<endl;
        
         while(temp!=NULL){
           temp->val=v[i];
            temp=temp->next;
             i++;
        }
        return head;
        
        


        
        
    }
};
