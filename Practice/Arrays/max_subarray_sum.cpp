#include <iostream>
#include <limits.h>
using namespace std;

int maxSubarraySum(int* arr, int size){
    // Brute force method: we'll create every subarray and update the maxSum we find any
    // TC -> O(N^2) ; SC -> O(1)

    // Optimal method : kandane's Algorithm
    // TC -> O(N) ; SC -> O(1) 
    int maxSum = INT_MIN ;
    int sum = 0 ;
    for( int i=0 ; i<size ; i++){
        sum += arr[i] ;
        maxSum = max(maxSum, sum) ;
        if( sum < 0 ){
            sum = 0 ;
        }
    }
    if( maxSum < 0 ){
        return -1 ;
    }
    return maxSum;
}

int main(){
    int arr[10] = {-2, -3, 4, -1, 2, 1, 5, -3, 2} ;
    int maxSum = maxSubarraySum(arr, 10) ;
    cout << maxSum << endl;
    return 0;
}