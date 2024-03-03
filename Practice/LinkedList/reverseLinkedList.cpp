#include <iostream>
using namespace std;

class listNode{
    public:
        int data ;
        listNode* next ;

        listNode(int d){
            this -> data = d ;
            this -> next = NULL ;
        }
        ~listNode(){
            int val = this -> data ;
            if( this -> next != NULL ){
                delete next ;
                this -> next = NULL ;
            }
        }
};

void insertNode_tail(listNode* &tail, int d){
    listNode* newNode = new listNode(d) ;
    tail -> next = newNode ;
    tail = newNode;
}

void printlist(listNode* &head){
    listNode* temp = head ;
    while(temp != NULL){
        cout << temp -> data <<" " ;
        temp = temp -> next ;
    }
}

void reverseList(listNode* &head){
    if( head == NULL ){
        return ;
    }
    listNode* prev = NULL ;
    listNode* curr = head ;
    while(curr != NULL){
        listNode* temp = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = temp ;
    }
    head = prev ;
}

int main(){

    listNode* node = new listNode(0) ;
    listNode* head = node ;
    listNode* tail = node ;

    insertNode_tail(tail, 1) ;
    insertNode_tail(tail, 2) ;
    insertNode_tail(tail, 3) ;
    insertNode_tail(tail, 4) ;
    insertNode_tail(tail, 5) ;

    cout <<"Before reverse: ";
    printlist(head) ;
    cout << endl;
    
    reverseList(head);
    cout <<"After reverse: ";
    printlist(head) ;
    return 0;   
}