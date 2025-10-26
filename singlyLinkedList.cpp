#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;

    }
    
};
void insertAtHead(Node* &head,int val){
        Node* new_node = new Node(val);
        new_node->next = head;
        head=new_node;
    }
    
void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;

}
void insertAtPosition(Node* &head, int pos, int val) {
   
    if (pos == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    
    int curr_pos = 0;

  
    while (curr_pos < pos - 1 && temp != NULL) {
        temp = temp->next;
        curr_pos++;
    }

    
    if (temp == NULL) {
        cout << "Position out of bounds. Cannot insert " << val << " at position " << pos << "." << endl;
        return; // Exit the function safely
    }

   
    Node* new_node = new Node(val);
    new_node->next = temp->next;
    temp->next = new_node;
}
void deleteAtHead(Node* &head){
    if(head == NULL) return; 
    Node* del= head;
    head = head->next;
    free(del);
}
void deleteAtTail(Node* &head){
    if (head == NULL) return;
    Node* secondlast = head;
    while(secondlast->next->next != NULL){
        secondlast = secondlast->next;
    } 
    Node* del = secondlast->next;
    secondlast->next = NULL;
    free(del);
}
void deleteAtPosition(Node* &head, int pos){
    if (head == NULL) return;
    if (pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int curr_pos =0;
    while (curr_pos < pos - 1 && temp != NULL){
        temp = temp-> next;
        curr_pos++;
    }
    if (temp == NULL || temp->next == NULL){
        cout<<"position out of bounds"<<endl;
        return;
    }
    Node* del = temp->next;
    temp->next = del->next;
    free(del);


}


void display(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp ->data << "-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
int main(){
    Node* head = NULL;
    Node node(0);
    insertAtHead(head, 10);    
    insertAtHead(head, 20);    
    insertAtHead(head, 30);
    insertAtTail(head, 40);
    insertAtPosition(head, 2, 25);
    deleteAtHead(head);
    deleteAtTail(head);
    deleteAtPosition(head,2);
    display(head);
    insertAtHead(head,50);
    display(head);

    return 0;

}