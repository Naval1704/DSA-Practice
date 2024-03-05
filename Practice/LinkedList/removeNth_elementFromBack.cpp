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

void removeNthfromBack(listNode* &head, int pos){
    if( head == NULL || head -> next == NULL){
        return ;
    }

    listNode* slow = head ;
    listNode* fast = head ;

    while(pos--){
        fast = fast -> next ;
    }

    while( fast != NULL && fast -> next != NULL ){
        slow = slow -> next ;
        fast = fast -> next ;
    }

    listNode* temp = slow -> next ;
    slow -> next = temp -> next ;
    temp -> next = NULL ;
    delete temp ;
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
    printlist(head);
    cout << endl;
    removeNthfromBack(head, 3) ;
    printlist(head);
    return 0;
}