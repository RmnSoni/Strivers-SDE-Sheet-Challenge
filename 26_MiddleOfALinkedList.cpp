/*
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
*/

Node *findMiddle(Node *head) {
    // Write your code here
    Node* singleJump=head;
    Node* doubleJump=head;
    while(doubleJump!=NULL && doubleJump->next!=NULL){
        singleJump=singleJump->next;
        doubleJump=doubleJump->next->next;
    }
    return singleJump;
}

