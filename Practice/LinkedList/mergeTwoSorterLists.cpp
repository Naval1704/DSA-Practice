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

void printlist(listNode* head){
    listNode* temp = head ;
    while(temp != NULL){
        cout << temp -> data <<" " ;
        temp = temp -> next ;
    }
}

listNode* mergeLists(listNode* &list1, listNode* &list2){
    listNode* newList = new listNode(0) ;
    listNode* curr = newList ;
    while(list1 != NULL && list2 != NULL){
        if( list1->data <= list2->data ){
            curr -> next = list1 ;
            list1 = list1 -> next ;
        }
        else{
            curr -> next = list2 ;
            list2 = list2 -> next ;
        }
        curr = curr -> next ;
    }
    if( list1 != NULL ){
        curr -> next = list1 ;
    }
    if( list2 != NULL ){
        curr -> next = list2 ;
    }
    return newList->next ;
}

int main(){

    listNode* node = new listNode(1) ;
    listNode* head = node ;
    listNode* tail = node ;
    insertNode_tail(tail, 3) ;
    insertNode_tail(tail, 5) ;
    insertNode_tail(tail, 8) ;

    listNode* node1 = new listNode(0) ;
    listNode* head1 = node1 ;
    listNode* tail1 = node1 ;
    insertNode_tail(tail1,2) ;
    insertNode_tail(tail1,4) ;
    insertNode_tail(tail1,6) ;
    insertNode_tail(tail1,7) ;

    listNode* merged = mergeLists(head, head1) ;
    printlist(merged) ;
    return 0;   
}