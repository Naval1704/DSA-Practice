#include <iostream>
#include <vector>
using namespace std;
void setMatrixZeros(vector<vector<int>>&matrix){
    int n = matrix.size() ;
    int m = matrix[0].size() ;
    
    vector<bool> rows(n) ;
    vector<bool> cols(m) ;

    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            if( matrix[i][j] == 0 ){
                rows[i] = true ;
                cols[j] = true ;
            }
        }
    }

    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            if( rows[i] || cols[j] ){
                matrix[i][j] = 0 ;
            }
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    setMatrixZeros(matrix) ;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size(); j++){
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}