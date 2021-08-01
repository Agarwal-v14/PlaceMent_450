ListNode *StaringOfNode(ListNode *head){
    ListNode *slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next->next;
        if(slow == fast){
            ListNode *begin = head;
            while(begin!=slow){
                begin = begin->next;
                slow = slow->next;
            }
            return slow;
        }
    }
    return NULL;
}