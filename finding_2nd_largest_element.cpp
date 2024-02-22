#include <iostream>
using namespace std; 
int secondLargest(int* arr, int size){
    int largest = 0 ;
    int secondLargest = -1 ;
    for( int i=0 ; i<size ; i++){
        // if any element is greater than the largest element we'll swap
        if( arr[i] > largest ){
            secondLargest = largest ;
            largest = arr[i] ;
        }
        // check if any element is greater than the secondLargest and is also not equal to the largest element
        else if( arr[i] < largest ){
            if( secondLargest == -1 || arr[i] > secondLargest ){
                secondLargest = arr[i] ;
            }
        }
    }
    cout << largest << endl;

    // will return the second largest element
    return secondLargest ;
}
int main(){
    int arr[10] = {1, 3, 6, 8, 12, 15, 19, 20, 32, 42} ;
    cout << secondLargest(arr, 10) ;
    return 0; 
}