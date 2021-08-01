// Going to use the Algorithms of hare and tortoise
// one pointer will move first and one pointer will move slow
// if at any point they are same it means there is loop
bool detectLoop(ListNode *head){
    ListNode *tortoise = head, *hare = head;
    while(hare->next!=NULL && hare!=NULL ){
        hare = hare->next->next;
        tortoise =  tortoise->next;
        if(hare==tortoise)
            return true;
    }
    return false;
}