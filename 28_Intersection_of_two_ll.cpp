/****************************************************************

https://www.codingninjas.com/studio/problems/630457


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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node* first=firstHead;
    Node* second=secondHead;

    while(first!=second){
        if (first==NULL) first=secondHead;
        else first = first->next;
        if (second==NULL) second=firstHead;
        else second=second->next;
    }

    return first;
}
