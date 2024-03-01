#include <iostream>
using namespace std; 

// // minHeap
// void heapify_minheap(int* arr, int i, int n){   
//     int mini = i ;
//     int l = 2*i + 1;         // Left child 
//     int r = 2*i + 2 ;     // Right child
//     if( l<n && arr[mini] > arr[l] ){
//         mini = l ;
//     }
//     if( r<n && arr[mini] > arr[r] ){
//         mini = r ;
//     }
//     if( mini != i ){
//         swap(arr[mini], arr[i]);
//         heapify(arr, mini, n);
//     }
// }

// maxHeap
void heapify_maxheap(int* arr, int i, int n){
    int largest = i ;
    int l = 2*i + 1 ;
    int r = 2*i + 2 ;

    if( l<n && arr[largest] < arr[l] ){
        largest = l ;
    }
    if( r<n && arr[largest] < arr[r] ){
        largest = r ;
    }
    if( largest != i ){
        swap(arr[largest], arr[i]) ;
        heapify_maxheap(arr, largest, n);
    }
}

void heapSort(int* arr, int n){
    for(int i=n-1 ; i>=0 ; i--){
        swap(arr[i], arr[0]);
        heapify_maxheap(arr, 0, i) ;
    }
}

int main(){
    int arr[10] = {4,6,2,5,7,9,1,3,0,8} ;

    // // for sorting array in decreasing order
    // for( int i=4 ; i>=0 ; i--){
    //     heapify_minheap(arr, i, 10);
    // }

    // for sorting array in decreasing order 
    for( int i=4 ; i>=0 ; i--){
        heapify_maxheap(arr, i, 10);
    }
    heapSort(arr,10);
    for(int i=0 ; i<10 ; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}