#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main(){
    unordered_map<char, int> mp ;
    string str ;
    cin >> str ;
    for(int i=0 ; i<str.size() ; i++){
        mp[str[i]]++;
    }
    char aloneChar ;
    for( auto it : mp ){
        if( it.second == 1 ){
            aloneChar = it.first ;
        }
    }
    for( int i=0 ; i<str.size() ; i++){
        if( str[i] == aloneChar ){
            cout << i+1 << endl;
        }
    }
    // cout << aloneChar << endl;
    // cout << aloneChar << endl;
    return 0;
}