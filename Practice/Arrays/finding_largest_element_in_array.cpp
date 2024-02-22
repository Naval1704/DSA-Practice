#include <iostream>
using namespace std;

int bruteforce( int* arr, int size){
    // So in bruteforce method we'll first sort the array and then just print the last maxmum element 
    for( int i=0 ; i<size ; i++){
        for( int j=i+1 ; j<size ; j++){
            if( arr[i] > arr[j] ){
                int temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }

    // To print the array
    // for(int i=0 ; i<size ; i++){
    //     cout << arr[i] <<" " ;
    // }

    return arr[size-1] ;
}

int optimal(int* arr, int size){
    int largest = arr[0] ;
    for( int i=1 ; i<size ; i++){
        if( arr[i] > largest ){
            largest = arr[i] ;
        }
    }
    return largest ;
}

int main(){
    
    int Arr[10] = {0,9,1,8,2,7,3,6,4,5} ;

    // bruteForce method 
    cout << " 'BruteForce Method' Maximum element: " << bruteforce(Arr, 10) << endl;    
    cout << " 'Optimal Mehtod' Maximum element: " << optimal(Arr, 10) << endl;
    return 0 ;
}