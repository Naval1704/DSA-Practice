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
int main(){
    int arr[10] = {3,4,5,2,1,6,7,9,8,0} ;
    bubbleSort(arr, 10) ;
    for(int i=0; i<10 ; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}