#include <iostream>
using namespace std ;
int main(){

    int n ;
    cin >> n ;

    string str = "" ;
    str += "L" ;
    for( int i=0 ; i<n ; i++){
        str+="o" ;
    }
    str+="ng" ;
    cout << str << endl;
    return 0; 
}