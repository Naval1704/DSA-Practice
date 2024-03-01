#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ;
    cin >> n ;

    vector<int> arr(n,0) ;
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ;
        arr[x-1] = i ;
    }

    // vector<pair<int,int>> arr ;
    // for(int i=0 ; i<n ; i++){
    //     int x ;
    //     cin >> x ;
    //     arr.push_back(make_pair(x,i));
    // }

    int q ;
    cin >> q ;

    for( int i=0 ; i<q ; i++){
        int a, b ;
        cin >> a >> b ;
        // cout << arr[a-1]<< endl ;
        // cout << arr[b-1] << endl ;
        if (arr[a-1] < arr[b-1]) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }
    return 0;
}