#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>arr, int n){
    int cnt=0 ; 
    int element=0 ;
    for(int i=0 ; i<n ; i++){
        if( cnt==0 ){
            element = arr[i] ;
            cnt=1;
        }
        else if( arr[i] == element ){
            cnt++ ;
        }
        else{
            cnt-- ;
        }
    }
    int cnt1=0 ; 
    for( int i=0 ; i<n ; i++){
        if( arr[i] == element ){
            cnt1++; 
        }
    }

    if( cnt1 > n/2 ) {
        return element ;
    }
}
int main(){
    vector<int> arr = {1, 1, 2, 2, 2, 2, 2, 2, 1} ;
    cout << majorityElement(arr, arr.size()) << endl;
    return 0;
}