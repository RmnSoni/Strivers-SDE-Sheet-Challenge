#include <bits/stdc++.h>

/************************************************************
    Following is the linked list node structure.
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;
        Node(T data) {
            next = NULL;
            this->data = data;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
************************************************************/

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second){
    Node<int> *temp = new Node<int>(0);
    Node<int> *ans = temp;
    while (first && second){
        if (first->data <= second->data){
            temp->next = first;
            first = first->next;
        }else{
            temp->next = second;
            second = second->next;
        }
        temp = temp->next;
    }
    if (first) temp->next = first;
    if (second) temp->next = second;

    return ans->next;
}