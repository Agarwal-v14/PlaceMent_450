void RemoveTheLoop(ListNode *head){
    ListNode *slow = head, *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            ListNode *begin = head;
            if(begin == slow){
                while(slow->next!=begin){
                    slow = slow->next;
                }
            }else{
                while(begin->next!=slow->next){
                    begin = begin->next;
                    slow = slow->next;
                }
            }
            slow->next = NULL;
            return;
        }
    }
    return;
}