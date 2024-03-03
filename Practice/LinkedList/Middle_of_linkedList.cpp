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

/*
    using Slow and Fast pointers i've tried to find the middle element 

    0 1 2 3 4 5 

    slow pointer will move 1 step and fast pointer will move 2 steps 
*/
int findMiddle(listNode* &head){
    listNode* slow = head ;
    listNode* fast = head ;
    while( fast != NULL && fast -> next != NULL ){
        slow = slow -> next ;
        fast = fast -> next -> next ;
    }
    return slow -> data ;
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

    cout << findMiddle(head) << endl;

    return 0;   
}