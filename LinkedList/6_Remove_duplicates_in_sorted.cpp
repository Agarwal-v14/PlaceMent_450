void removeDuplicates(ListNode *head){
    if(head==NULL)
        return ;
    ListNode *curr = head,*prev;
    while(curr!=NULL){
        int x = curr->val;
        prev = curr;
        curr = curr->next;
        while(curr!=NULL && curr->val==x){
            prev->next = curr->next;
            curr = curr->next;
        }
    }
    return;
}