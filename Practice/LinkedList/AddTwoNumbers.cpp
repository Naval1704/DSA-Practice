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
    For adding nodes in a linked List 
    
    we need to take care of carry, otherwise the process is simple 
*/
listNode* Add(listNode* list1, listNode* list2){
    listNode* res = new listNode(0) ;
    listNode* curr = res ;

    int carry = 0 ;
    while( list1 != NULL || list2 != NULL || carry ){
        int sum = 0 ; 
        if( list1 != NULL ){
            sum += list1 -> data ;
            list1 = list1 -> next ;
        }
        if( list2 != NULL ){
            sum += list2 -> data ;
            list2 = list2 -> next ;
        }

        sum += carry ;
        carry = sum / 10 ;
        curr -> next = new listNode(sum%10) ;
        curr = curr -> next ;
    }
    return res -> next ;
}

int main(){
    listNode* node = new listNode(3) ;
    listNode* head = node ;
    listNode* tail = node ;

    insertNode_tail(tail, 1) ;
    insertNode_tail(tail, 2) ;
    insertNode_tail(tail, 3) ;
    insertNode_tail(tail, 4) ;
    insertNode_tail(tail, 5) ;

    listNode* node1 = new listNode(6) ;
    listNode* head1 = node1 ;
    listNode* tail1 = node1 ;

    insertNode_tail(tail1, 7) ;
    insertNode_tail(tail1, 8) ;
    insertNode_tail(tail1, 9) ;
    insertNode_tail(tail1, 4) ;
    insertNode_tail(tail1, 5) ;

    // num1 = 312345
    // num2 = 678945
    listNode* ans = Add(node, node1) ;
    printlist(ans) ;
    return 0;
}