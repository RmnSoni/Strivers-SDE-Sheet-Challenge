//Add Two Numbers
// https://www.codingninjas.com/studio/problems/add-two-numbers-as-linked-lists_1170520

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2){
    Node * ans = new Node();
    Node* temp=ans;

    bool carry =false;
    int sum=0;

    while(num1 && num2){
        sum=carry+num1->data+num2->data;
        carry = sum/10;
        temp->next= new Node(sum%10);
        temp=temp->next;
        num1=num1->next;
        num2=num2->next;
    }
    while(num1){
        sum=carry+num1->data;
        carry = sum/10;
        temp->next= new Node(sum%10);
        temp=temp->next;
        num1=num1->next;
    }while(num2){
        sum=carry+num2->data;
        carry = sum/10;
        temp->next= new Node(sum%10);
        temp=temp->next;
        num2=num2->next;
    }
    if(carry){
        temp->next= new Node(1);
    }
    return ans->next;
}
