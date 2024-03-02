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

void insertNode_head(listNode* &head, int d){
    listNode* newNode = new listNode(d) ;
    newNode -> next = head ;
    head = newNode ;
}

void insertNode_atPosition(listNode* &head, int pos, int d){
    listNode* newNode = new listNode(d) ;

    // Insert at head
    if(pos == 1){
        insertNode_head(head, d) ;
        return;
    }
    // else anywhere 

    listNode* curr = head ;
    int cnt = 1 ;
    while(cnt < pos-1){
        curr = curr -> next ;
        cnt++ ;
    }
    newNode -> next = curr -> next ;   
    curr -> next = newNode ; 
}

void printlist(listNode* &head){
    listNode* temp = head ;
    while(temp != NULL){
        cout << temp -> data <<" " ;
        temp = temp -> next ;
    }
}

int main(){
    listNode* node = new listNode(0) ;
    listNode* head = node ;
    listNode* tail = node ;

    insertNode_tail(tail, 1) ;
    insertNode_tail(tail, 2) ;

    insertNode_head(head, 6) ;
    insertNode_head(head, 7) ;
    
    insertNode_atPosition(head, 3, 5) ;
    insertNode_atPosition(head, 4, 4) ;

    printlist(head) ;
    return 0;
}