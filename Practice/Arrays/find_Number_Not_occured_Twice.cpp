#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4, 1, 2, 1, 2};

    // In brute force method we'll take the count of every element in the array

    // In optimal method we'll be using xorr to find the single element
    // How?? every element occuring twice will become 0 at the end, and we'll get the single element as the output
    int xorr = 0 ;
    for( int i=0 ; i<5; i++){
        xorr ^= arr[i] ;
    }
    cout << xorr << endl;
    return 0;
}