#include <bits/stdc++.h> 
class Node 
{
    public:
int val ;
Node *next;
Node (int val)
{
    this->val=val;
    this->next=NULL;
}
};
class Queue {
public:
Node *head=NULL;
Node *tail=NULL;
int sz=0;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {

        // Implement the isEmpty() function
        if (sz==0)return true;
        else return false;
    }

    void enqueue(int val) {
        // Implement the enqueue() function
         sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }

    int dequeue() {
        
        if (head ==NULL)
        {
            return -1;
        }
        else{
            sz--;
        Node *deletenode = head;
        head = head->next;
         return deletenode->val;
        delete deletenode;
        
        if (head == NULL)
        {
            tail = NULL;
        }
        }
       // return head->val;
        // Implement the dequeue() function
    }

    int front() {
        // Implement the front() function
        if (head!=NULL)
        return head->val;
        else return -1;
    }
};