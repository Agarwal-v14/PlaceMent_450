ListNode* MoveToFront(ListNode *head){
    if(!head || !head->next)
        return head;
    ListNode *last,*sec_last;
    ListNode *curr = head;
    while(curr->next!=NULL){
        sec_last = curr;
        last = curr->next;
        curr = curr->next;
    }
    sec_last->next = NULL;
    last->next = head;
    head = last;
    return head;
}
