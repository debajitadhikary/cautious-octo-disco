#include<bits/stdc++.h>
using namespace std ;



/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
33333
32223
32123
32223
33333

----------------------------------------------------------------
Sample Input 2 :
5

Sample Output 2 :
555555555
544444445
543333345
543222325
543212345
543222325
543333345
544444445
555555555

----------------------------------------------------------------
Sample Input 3 :
4

Sample Output 3 :
4444444
4333334
4322234
4321234
4322234
4333334
4444444

----------------------------------------------------------------
*/

void getNumberPattern(int n) {

    const int col = 2 * n - 1 ;

    vector<vector<int>> dp ( col , vector<int> (col , 0)) ;

    int left = 0 , top = 0 , right = col -1 , bottom = col-1 ;

    int bit = n ;

    while( left <= right && top <= bottom ){

        // left to right : 
        
        for(int i = left ; i <= right ; ++i ){
            dp[top][i] = bit ;
        }
        ++top ; 
        
        
        // right to bottom : 
        
        for(int i = top ; i <= bottom ; ++i ){
            dp[i][right] = bit ;
        }
        --right ;
        
        
        // bottom to left : 
        if( top <= bottom ){
            for(int i = right ; i >= left ; --i ){
                dp[bottom][i] = bit ;
            }
            --bottom ;
        }
        
        
        // left to top : 
        if( left <= right){
            for(int i = bottom ; i >= top ; --i ){
                dp[i][left] = bit ;
            }
            ++left ;
        }
        
        --bit ;
    }
        
        
    // print the final grid :
    for(const auto &it : dp ){
        for(const auto &i : it ){
            cout << i ;
        }
        cout << '\n' ;
    }

}


int main(int argc , char const *argv[]){
    
    int n = 5 ; 

    getNumberPattern(n) ;


    // std::cin.get();
    return 0;
}
