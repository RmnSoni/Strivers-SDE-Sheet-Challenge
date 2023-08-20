Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	if (head==NULL || head->next==NULL) return head; 
    int count=0;
    Node* itr=head;
    while(itr){
        count++;
        itr=itr->next;
    }
    Node* pre=new Node(0);
	pre->next=head;
    Node* nex=head->next;
    Node* ans=pre;
    int i=0;
    while(i<n && b[i]<=count){
        if(!b[i]) {i++;continue;}
        itr=pre->next;
        nex=itr->next;
        for(int j=1;j<b[i];j++){
            itr->next=nex->next;
            nex->next=pre->next;
            pre->next=nex;
            nex=itr->next;
        }
        pre=itr;
        count-=b[i];
        i++;
    }
    return ans->next;
}