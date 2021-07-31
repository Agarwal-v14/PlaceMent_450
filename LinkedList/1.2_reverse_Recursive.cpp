#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode *next;
        ListNode(int val){
            this->val = val;
            this->next = NULL;
        } 
};
void insert(ListNode *&head,int val){
    ListNode *newNode = new ListNode(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    ListNode *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = newNode;
    return;
}
void printList(ListNode *head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    return;
}
ListNode *reverseList(ListNode *head){
    if(head==NULL || head->next==NULL)
        return head;
    ListNode *ans = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return ans;

    
}
int main(){
    ListNode *head = NULL;
    for(int i=1;i<=10;i++){
        insert(head,rand()%100);
    }
    printList(head);
    head = reverseList(head);
    printList(head);
}