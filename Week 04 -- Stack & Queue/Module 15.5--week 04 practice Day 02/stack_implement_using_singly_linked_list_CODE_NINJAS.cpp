

  /*

        class Node
        {
        public:
            int data;
            Node *next;
          
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
           
        };*/
class Stack
{
    //Write your code here
   
public:

     Node *head=NULL;
    // Node *tail=NULL;
     int size=0; 
     
    Stack()
    {
        //Write your code here
    
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        if (size==0) return true;
        else return false;
    }

    void push(int data)
    { size++;
       Node *newnode =new Node(data);
       if (head==NULL)
       {
           head=newnode;
           
           return;
       }
        newnode->next=head;
        head=newnode;
    }

    void pop()
    {
      //  size--;
        if (head!=NULL)
        {
             size--;
             Node *deletetail=head;
             head=head->next;
            delete deletetail;   
        }
         

    }

    int getTop()
    {
        if(head!=NULL)
            return head->data;
        else
            return -1;
    }

};