#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
1
0 1
1 0 1

----------------------------------------------------------------
Sample Input 2 :
4

Sample Output 2 :
1
0 1
1 0 1
0 1 0 1

----------------------------------------------------------------
Sample Input 3 :
6

Sample Output 3 :
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 

----------------------------------------------------------------
*/


void nBinaryTriangle(int n) {

    
    for(int i = 1 ; i <= n ; ++i ){
        int bit = ( i & 1 ? 1 : 0 ) ;

        for(int j = 1 ; j <= i ; ++j ){

            cout << bit << ' ' ; 
            
            bit = !bit ;
        }
        cout << '\n' ;
    }
}


int main(int argc , char const *argv[]){
  
    int n = 6 ; 


    nBinaryTriangle(n) ;


    // std::cin.get();
    return 0;
}
