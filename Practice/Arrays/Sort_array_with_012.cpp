#include <iostream>
#include <vector>
using namespace std;

void sort123(vector<int>&arr, int n){
    int l = 0 ;
    int r = n-1 ;
    int m = 0 ; 
    while( m<=r ){
        if( arr[m] == 0 ){
            swap(arr[m], arr[l]) ;
            m++ ;
            l++ ;
        }
        else if( arr[m] == 1 ){
            m++ ;
        }
        else{
            swap(arr[m], arr[r]) ;
            r-- ;
        }
    }
}

int main(){
    vector<int> arr = {2,1,1,0,1,2,1,2,0,0,0} ;
    // Brute force method : in this we'll just count the number of 0s, 1s, and 2s and using that we'll make changes in the original array
    // Better Optimal method : Dutch National Flag Algorithm
    sort123(arr, arr.size());
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}