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

void removeNthelement(listNode* &head, int pos){
    if(pos == 1){
        listNode* temp = head ;
        head = head -> next ;
        temp -> next = NULL ;
        delete temp ;
    }
    else{
        listNode* curr = head ;
        listNode* temp = NULL ;
        int cnt = 1 ;
        while(cnt <= pos){
            temp = curr ;
            curr = curr -> next ;
            cnt++ ;
        }
        temp -> next = curr -> next ;
        curr -> next = NULL ;
        delete curr ;
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

    removeNthelement(head,2) ;
    printlist(head);
    return 0;
}