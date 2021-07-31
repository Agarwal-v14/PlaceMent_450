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
int main(){
    ListNode *head = NULL;
    for(int i=2;i<=10;i++){
        insert(head,rand()%100);
    }
    printList(head);
}