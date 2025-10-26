#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next = NULL;
    }
};
void insertAtTail(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp = head;
     if (head == NULL) {  // if list is empty
        head = new_node;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
   
}
void display(Node* head){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->val<<"->";
    temp = temp->next;
}
cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    insertAtTail(head,3);
    display(head);
    
}