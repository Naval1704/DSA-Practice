#include <iostream>
#include <vector>
using namespace std;

int subarraySum_BruteForce(vector<int>arr, int size, int targetSum){
    //bruteforce method 
    int maxlen = 0 ;
    for( int i=0 ; i<size ; i++){
        int sum = 0;
        for( int j=i ; j<size ; j++){
            sum += arr[j] ;
            if( sum == targetSum ){
                maxlen = max(maxlen, j-i+1) ;
            }
        }
    }
    return maxlen;
    // TC -> O(N^2) 
    // SC -> O(1)
} 

int subarraySum(vector<int>arr, int size, int targetSum){
    int sum = arr[0] ;
    int len = 0 ;
    int r = 0 ;
    int l = 0 ;
    while(r<size){
        while( l<=r && sum > targetSum ){
            sum -= arr[l] ;
            l++;
        }
        if( sum == targetSum ){
            len = max(len, r-l+1) ;
        }
        r++;
        sum += arr[r] ;
    }
    return len ;
}

int main(){ 
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3} ;
    int k ;
    cin >> k ; // 

    // int ans = subarraySum_BruteForce(arr, 10, k) ;
    int ans = subarraySum(arr, 10, k) ;

    cout << ans << endl;
    return 0;
}