/*Delete without head pointer 

Easy Accuracy: 69.01% Submissions: 100k+ Points: 2
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.   
You are given a pointer/ reference to the node which is to be deleted from the
 linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. It is guaranteed that the node to be 
deleted is not a tail node in the linked list.

Example 1:

Input:
N = 2
value[] = {1,2}
node = 1
Output: 2
Explanation: After deleting 1 from the
linked list, we have remaining nodes
as 2.
Example 2:

Input:
N = 4
value[] = {10,20,4,30}
node = 20
Output: 10 4 30
Explanation: After deleting 20 from
the linked list, we have remaining
nodes as 10, 4 and 30.
Your Task:
You only need to complete the function deleteNode that takes reference to 
the node that needs to be deleted. The printing is done automatically by the driver code.

Expected Time Complexity : O(1)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 103*/

// CODE 

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;

Node *findNode(Node* head, int search_for)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->data == search_for)
            break;
        current = current->next;
    }
    return current;
}


void insert()
{
    int n,i,value;
    Node *temp;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=new Node(value);
            temp=head;
            continue;
        }
        else
        {
            temp->next= new Node(value);
            temp=temp->next;
            temp->next=NULL;
        }
    }
}

/* Function to print linked list */
void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}



 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       
       
    //   *del=*del->next;
       
       // second approach 
       Node *temp=del->next;
       del->data=temp->data;
       del->next=temp->next;
       delete temp;
       
    }

};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */

    int t,k,n,value;
    
    scanf("%d",&t);
    while(t--)
    {
        insert();
        scanf("%d",&k);
        Node *del = findNode(head, k);
        Solution ob;
        if (del != NULL && del->next != NULL)
        {
            ob.deleteNode(del);
        }
        printList(head);
    }
    return(0);
}


  // } Driver Code Ends
