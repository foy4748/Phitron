/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here

public:

    Node * HEAD;
    Node * TAIL;
    int stackSize;

    Stack()
    {
        //Write your code here
        this->HEAD = NULL;
        this->TAIL = NULL;
        this->stackSize = 0;

    }

    int getSize()
    {
        //Write your code here
        return this->stackSize;
    }

    bool isEmpty()
    {
        //Write your code here
        return !HEAD;
    }

    void push(int data)
    {
        //Write your code here
        Node * newNode = new Node(data);
        this->stackSize = this->stackSize + 1;
        if(this->HEAD == NULL){
          this->HEAD = newNode;
          this->TAIL = newNode;
          return;  
        }


        this->TAIL->next = newNode;
        this->TAIL = newNode;
    }

    void pop()
    {
        //Write your code here
        if(this->HEAD == NULL) return;
        Node * temp = this->HEAD;

        if(temp->next == NULL){
            delete temp;
            this->HEAD = NULL;
            this->TAIL = NULL;
            this->stackSize = 0;
            return;
        }
        while(temp->next && temp->next->next){
            temp = temp->next;
        }
        Node * toBeDeleted = temp->next;
        temp->next = NULL;
        this->TAIL = temp;
        this->stackSize = this->stackSize - 1;
        delete toBeDeleted;
        
    }

    int getTop()
    {
        //Write your code here
        if(this->TAIL != NULL){
            return this->TAIL->data;
        }else{
            //cout<<"-1"<<endl;
            return -1;
        }
    }
};
