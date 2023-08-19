//https://www.codingninjas.com/studio/problems/reverse-list-in-k-groups_983644

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    int count=0;
    Node* itr=head;
    while(itr){
        count++;
        itr=itr->next;
    }
    
    Node* ans=new Node(0,head);
    Node* nex=head->next;
    Node* pre=ans;
    while(count>=k){    
        itr=pre->next;
        nex=itr->next;
        for(int i=1;i<k;i++){
            itr->next=nex->next;
            nex->next=pre->next;
            pre->next=nex;
            nex=itr->next;
        }
        pre=itr;
        count-=k;
    }
    return ans->next;
}