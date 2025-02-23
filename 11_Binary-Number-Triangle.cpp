#include<bits/stdc++.h>
using namespace std ;



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
  
    int n = 5 ; 


    nBinaryTriangle(n) ;


    // std::cin.get();
    return 0;
}
