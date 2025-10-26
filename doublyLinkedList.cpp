#include<iostream>

using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int data) {
        this->val = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtStart(Node* &head, Node* &tail, int data) {
    Node* new_node = new Node(data);

    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void insertAtEnd(Node* &head, Node* &tail, int data){
    Node* new_node = new Node(data);
    if (tail == NULL){
        head = new_node;
        tail  = new_node;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
    new_node->next = NULL;

}
void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
    if (pos==0){
        insertAtStart(head, tail, data);
        return;
    }
    Node* temp= head;
    int count =1 ;
    while(count<pos-1){
        temp= temp->next;
        count++;

    }
    Node* new_node=new Node(data);
    new_node->next= temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next->prev=new_node;
    return;

}
void deleteAtStart(Node* &head, Node* &tail) {
    if(head==NULL){
        return;
    }
    Node* to_delete=head;
    head = head->next;
    if (head != NULL){
        head->prev = NULL;
    }
    else { 
        tail = NULL;
    }
    free(to_delete);
}
void deleteAtEnd(Node* &head , Node* &tail){
    if (tail== NULL){
        return;
    }
    Node* to_delete = tail;
    tail= tail->prev;
    if (tail != NULL){
        tail->next = NULL;
    }
    else {
        head = NULL;
    }
    free(to_delete);
}
void deleAtPosition(Node* &head, Node* &tail, int pos){
    if (pos == 0) {
        deleteAtStart(head, tail);
        return;
    }
    Node* temp = head;
    int count 
   
    if (temp == NULL) {
        return; // Position is out of bounds
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    if (temp == tail) {
        tail = temp->prev; // Update tail if we are deleting the last node
    }
    free(temp);
    

}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL) {
            cout << " <-> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtStart(head, tail,30);
    insertAtStart(head, tail, 20);
    insertAtStart(head, tail, 10);
    insertAtEnd(head, tail, 40);
    insertAtPosition(head,tail,60,2);
    deleteAtStart(head, tail); 
    deleteAtEnd(head, tail);
 

    cout << "Doubly Linked List: ";
    display(head);

    return 0;
}