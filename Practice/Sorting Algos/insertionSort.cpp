#include <iostream>
using namespace std;
void insertionSort(int* arr, int n){
    for( int i=1 ; i<n ; i++){
        int element = arr[i] ;
        int j = i-1 ;
        while(j>=0 && arr[j] > element){
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j+1] = element;
    }
}

void recursive_insertionSort(int* arr, int i, int n){
    if(i==n){
        return ;
    }
    int j = i-1 ;
    while( j>=0 && arr[j] > arr[j+1] ){
        swap(arr[j+1], arr[j]) ;
        j--;
    }
    recursive_insertionSort(arr, i+1, n);
}

int main(){
    int arr[10] = {3,4,5,2,1,6,7,9,8,0} ;
    // insertionSort(arr, 10) ;
    recursive_insertionSort(arr, 1, 10);
    for(int i=0; i<10 ; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}

