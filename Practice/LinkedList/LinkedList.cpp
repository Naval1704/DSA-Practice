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

void deleteNode_atPosition(listNode* &head, int pos){
    if( pos == 1 ){
        // delete head 
        listNode* curr = head ;
        head = head -> next ;
        curr -> next = NULL ;
        delete curr ;
    }
    else{
        listNode* curr = head ;
        listNode* temp = NULL ;
        int cnt = 1 ;
        while( cnt <= pos ){
            temp = curr ;
            curr = curr -> next ;
            cnt++;
        }
        temp -> next = curr -> next ;
        curr -> next = NULL ;
        delete curr ;
    }
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
    insertNode_tail(tail, 3) ;
    insertNode_tail(tail, 4) ;
    insertNode_tail(tail, 5) ;

    deleteNode_atPosition(head,2);
    printlist(head) ;
    return 0;
}