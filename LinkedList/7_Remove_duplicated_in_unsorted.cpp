void removeDuplicates(ListNode *head){
    set<int>s;
    ListNode *curr = head,*prev=head;
    while(curr!=NULL){
        int x = curr->val;
        if(s.find(x)!=s.end()){
            prev->next = curr->next;
            curr = prev->next;
        }else{
            s.insert(x);
            prev = curr;
            curr = curr->next;
        }
    }
}