#include <iostream>
using namespace std;

void merge(int* arr, int low, int mid, int high){
    int l = low ;
    int r = mid+1 ;

    int temparr[10] ;
    int i=0 ;
    while( l <= mid && r <= high ){
        if( arr[l] <= arr[r] ){
            temparr[i++] = arr[l++] ;   
        }
        else{
            temparr[i++] = arr[r++] ;
        }
    }

    while( l<= mid ){
        temparr[i++] = arr[l++] ;
    }
    while( r <= high ){
        temparr[i++] = arr[r++] ;
    }

    for( int j=low ; j<=high ; j++){
        arr[j] = temparr[j-low] ;
    }
}

void mergeSort(int* arr, int low, int high){
    if(low >= high){
        return;
    }
    int mid = (high+low)/2 ;
    mergeSort(arr, low, mid) ;
    mergeSort(arr, mid+1, high) ;
    merge(arr, low, mid, high);
}

int main(){
    int arr[10] = {4,6,2,5,7,9,1,3,0,8} ;
    mergeSort(arr,0,10) ;
    for(int i=0 ; i<10 ; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}