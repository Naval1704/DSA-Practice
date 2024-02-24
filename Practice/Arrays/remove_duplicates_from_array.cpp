#include <iostream>
#include <set>
using namespace std;

int removeDuplicates_BruteForce(int*arr, int size){
    // we'll be using a set Data Structure to check if an element is not added twice
    set<int> st ;
    for( int i=0 ; i<size ; i++ ){
        st.insert(arr[i]) ;
    }

    int s = st.size() ;
    int j=0 ;
    for( auto it : st ){
        arr[j++] = it ;        
    }
    return s ;

    // TC -> O(Nlog(N)) + O(N) 
    // SC -> O(N)
}

int removeDuplicates_Optimal(int *arr, int size){
    // we are using a two pointer approace here 
    int i=0 ; 
    for( int j=1 ; j<size ; j++){
        if( arr[j] != arr[i] ){
            arr[i+1] = arr[j] ;
            i++;
        }
    }
    return i;

    // TC -> O(N) 
    // SC -> O(1)
}

int main(){
    int arr[11] = {1,1,2,2,2,3,3,4,4,5,6} ;

    // print array
    // int index = removeDuplicates_BruteForce(arr, 11) ;
    // cout << "Brute Force Method: ";
    // for( int i=0 ; i<index ; i++){
    //     cout << arr[i] << " " ;
    // }

    // print array
    int index = removeDuplicates_Optimal(arr, 11) ;
    cout << "Optimal Method: ";
    for( int i=0 ; i<index ; i++){
        cout << arr[i] << " " ;
    }

    return 0;   
}