#include <iostream>
using namespace std;

void bubbleSort(int* arr, int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if( arr[j+1] < arr[j] ){
                swap(arr[j+1],arr[j]) ;
            }
        }
    }
}

void recursive_bubbleSort(int* arr, int n){
    for(int j=0 ; j<n-2 ; j++){
        if( arr[j+1] < arr[j] ){
            swap(arr[j+1],arr[j]) ;
        }
    }
    bubbleSort(arr,n-1);
}

int main(){
    int arr[10] = {3,4,5,2,1,6,7,9,8,0} ;
    // bubbleSort(arr, 10) ;
    recursive_bubbleSort(arr, 10);
    for(int i=0; i<10 ; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}