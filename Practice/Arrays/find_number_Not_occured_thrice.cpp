#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){ 
    int arr[10] = {4, 1, 1, 2, 1, 3, 2, 2, 3, 3} ;
    unordered_map<int, int> mp ;
    
    for( int i=0 ; i<10 ; i++){
        mp[arr[i]]++ ;
    }

    int ans = 0 ;
    for( auto it : mp ){
        if( it.second == 1 ){
            cout << it.first << endl;
            break;
        }
    }

    return 0;
}