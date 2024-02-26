#include <iostream>
using namespace std;
void selectionSort(int* arr, int n){
    for(int i=0 ; i<n ; i++){
        for( int j=i+1; j<n ; j++){
            if( arr[j] < arr[i] ){
                swap(arr[i], arr[j]) ;
            }
        }
    }
}
int main(){
    int arr[10] = {3,4,5,2,1,6,7,9,8,0} ;
    selectionSort(arr, 10) ;
    for(int i=0; i<10 ; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}