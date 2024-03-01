#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N ;
    
    string str ;
    cin >> str ;

    int Q ;
    cin >> Q ;

    vector<int> v(26);
    for( int i=0; i<26; i++){
        v[i] = i ;
    }
    for(int i=0 ; i<Q ; i++){
        char c, d ;
        cin >> c >> d ;
        for(int j=0 ; j<26 ; j++){
            if(v[j] == c - 'a'){
                v[j] = d - 'a' ;
            }
        }
    }
    // string ans = "";
    for(int i=0 ; i<N; i++){
        cout << (char)(v[str[i]-'a'] + 'a');
    }
    // cout << ans << endl;
    return 0;
}