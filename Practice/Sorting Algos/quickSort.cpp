#include <iostream>
using namespace std;

int findIndx(int* arr, int low, int high){
    int pivot = arr[low] ;
    int l = low ;
    int h = high ;
    while( l<h ){
        while(arr[l] <= pivot && l <= high-1){
            l++;
        }
        while(arr[h] > pivot && h >= low-1){
            h--;
        } 
        if(l<h){
            swap(arr[l],arr[h]);
        }
    }
    swap(arr[h],arr[low]);
    return h;
}

void quickSort(int* arr, int low, int high){
    if(low < high){
        int pivot = findIndx(arr, low, high) ;
        quickSort(arr, low, pivot-1) ;
        quickSort(arr, pivot+1, high) ;
    }
}

int main(){
    int arr[10] = {4,6,2,5,7,9,1,3,0,8} ;
    quickSort(arr,0,9) ;
    for(int i=0 ; i<10 ; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}