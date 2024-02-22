#include <iostream>
#include <algorithm>
using namespace std;

int CTZ(int n){

    int cnt = 0 ;
    string binary = "" ;
    while( n>0 ){
        int r = n%2 ;
        if( r == 0 ){
            binary += "0" ;
        }
        else{
            binary += "1" ;
        }
        n = n/2 ;
    }

    // Binary representation of number 'n' 
    reverse(binary.begin(), binary.end()) ;
    // cout << binary << endl;

    for( int i=binary.size()-1 ; i>=0 ; i--){
        if( binary[i] == '1' ){
            break;
        }
        else{
            cnt++ ;
        }
    }
    return cnt ;
}

int main(){

    int n ;
    cin >> n ;

    cout << CTZ(n) << endl;
    return 0;
}