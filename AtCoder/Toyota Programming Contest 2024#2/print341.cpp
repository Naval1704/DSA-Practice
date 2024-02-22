#include <iostream>
using namespace std; 
int main(){

    int N ;
    cin >> N ;

    string str = "" ;
    while(N--){
        str += "10" ;
    }
    str += "1" ;
    cout << str << endl;
    return 0;
}