#include<bits/stdc++.h>
using namespace std ;



void nStarTriangle(int n) {
    
    for(int i = 1 ; i <= n ; ++i ){

        for(int k = n -1  ; k >= i  ; --k){
            cout << ' ' ;
        }

        int max_l = 2 * i - 1 ; 

        for(int j = 1 ; j <= max_l ; ++j ){
            cout << '*' ;
        }

        cout << '\n' ;
    }

}
    

int main(int argc , char const *argv[]){
    
    int n = 4 ; 


    nStarTriangle(n) ;


    // std::cin.get();
    return 0;
}
