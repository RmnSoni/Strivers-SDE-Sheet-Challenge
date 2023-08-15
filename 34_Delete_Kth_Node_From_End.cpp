// https://www.codingninjas.com/studio/problems/799912

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

Node* removeKthNode(Node* head, int K)
{
    Node* dummy = new Node(0,head);
    Node* fast=dummy;
    Node* slow=dummy;
    while(K--){
        fast=fast->next;
    }
    while(fast->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return dummy->next;
}
