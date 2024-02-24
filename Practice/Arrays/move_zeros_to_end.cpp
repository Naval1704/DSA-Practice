#include <iostream>
#include <algorithm>
using namespace std;

void moveZeros_toEnd(int* arr, int size){
    int j=0 ;
    for( int i=0 ; i<size ; i++){
        if( arr[i] != 0 ){
            swap(arr[i], arr[j]) ;
            j++;
        }
    }
}

int main(){
    int arr[10] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1} ;

    moveZeros_toEnd(arr, 10) ; // TC -> O(N) ; SC -> O(1)
    for( int i=0 ; i<10 ; i++){
        cout << arr[i] <<" ";
    }
    
    return 0;
}