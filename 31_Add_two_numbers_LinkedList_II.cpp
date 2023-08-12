// https://www.codingninjas.com/studio/problems/add-two-linked-lists_799487

#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/
Node<int>* reverse(Node<int>* head){
    Node<int> *prev=NULL;
    Node<int> *next;
    while(head!=NULL){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    Node<int>* list1 = reverse(first);
    Node<int>* list2 = reverse(second);
    Node<int>* ans = new Node<int>(0);
    Node<int>* temp=ans;

    bool carry =false;
    int sum=0;
    while(list1 && list2){
        sum=carry+list1->data+list2->data;
        carry = sum/10;
        temp->next= new Node<int>(sum%10);
        temp=temp->next;
        list1=list1->next;
        list2=list2->next;
    }
    while(list1){
        sum=carry+list1->data;
        carry = sum/10;
        temp->next= new Node<int>(sum%10);
        temp=temp->next;
        list1=list1->next;
    }while(list2){
        sum=carry+list2->data;
        carry = sum/10;
        temp->next= new Node<int>(sum%10);
        temp=temp->next;
        list2=list2->next;
    }
    if(carry){
        temp->next= new Node<int>(1);
    }
    return reverse(ans->next);
}