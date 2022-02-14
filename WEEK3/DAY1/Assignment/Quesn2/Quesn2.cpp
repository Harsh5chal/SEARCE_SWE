//Print Linked List
#include <iostream>

using namespace std;

class node{
    public:
            int data;
            node* next;

            node(int val){
                data = val;
                next = NULL;
            }
};

void insertAttail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
    //traverse
    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void printll(node* head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,5);
    printll(head);
    return 0;
}