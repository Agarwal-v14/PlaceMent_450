int add(ListNode *head){
    if(!head)
        return 1;
    int x = add(head->next);
    int num = head->val + x;
    int carry = num/10;
    head->val = num%10;
    return carry;
}
ListNode* Addone(ListNode *head){
    int carry = add(head);
    if(carry>0){
        ListNode *newNode = new ListNode(carry);
        newNode->next = head;
        head = newNode;
    }
    return head;
}