#include <iostream>
#include <unordered_set>
using namespace std;

int longestSeq(int* arr, int size){
    // bruteForce method : checking every number for the number next to it, which will indeed help us to find the longest seq
    // TC -> O(N^2) ; SC -> O(1) 

    // better method : sort the array and just using some mathematics find the longest seq 
    // TC -> O(NlogN) + O(N) ; SC -> O(1) 

    // Optimal method : using unordered Set

    if( size == 0 ){
        return 0 ;
    }

    int longest = 1 ;
    unordered_set<int> st ;

    for( int i=0 ; i<size ; i++){
        st.insert(arr[i]) ;
    }

    for( auto it : st ){
        int cnt = 1 ;
        if( st.find(it-1) == st.end() ){
            int x = it ;
            while( st.find(x+1) != st.end() ){
                x+=1 ;
                cnt+=1 ;
            }
        }
        longest = max(longest, cnt) ;
    }
    return longest; 
}

int main(){
    int arr[8] = {100, 4, 200, 1, 3, 2, 5, 6} ;
    int ans = longestSeq(arr, 8) ;
    cout << ans << endl;
    return 0;
}