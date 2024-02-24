#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void rotateArray1(vector<int> arr, vector<int>& tempArr, int size, int k){
    // TC -> O(K)
    for( int i=size-k ; i<size ; i++){
        tempArr[i-size+k] = arr[i] ;
    }
    // TC -> O(N-K)
    for( int i=0 ; i<size-k ; i++){
        tempArr[k+i] = arr[i] ;
    }
    // Overall TC -> O(N)
}

void rotateArray2(vector<int>& arr, int size, int k){
    reverse(arr.begin(), arr.end() - k) ;
    reverse(arr.end() - k, arr.end()) ;
    reverse(arr.begin(), arr.end()) ;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10} ;
    
    int k ;
    cin >> k ;

    vector<int> tempArr(10) ;

    // rotateArray1(arr, tempArr, 10, k) ; // TC -> O(N) ; SC -> O(N)
    // for(int i=0 ; i<10 ; i++){
    //     cout << tempArr[i] <<" ";
    // }

    // Optimized
    rotateArray2(arr, 10, k) ; // TC -> O(2N) ; SC -> O(1)
    for(int i=0 ; i<10 ; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}