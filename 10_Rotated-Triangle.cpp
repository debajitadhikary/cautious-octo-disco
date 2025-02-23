#include<bits/stdc++.h>
using namespace std ;




void nForest(int n) {
	
    for(int i = 1 ; i <= n ; ++i ){
        for(int j = 1 ; j <= i ; ++j ){
            cout << "*" ;
        }
        cout << '\n';
    }
}

void seeding(int n) {
    
    for(int i = n ; i >= 1 ; --i ){

        for(int j = 1 ; j <= i ; ++j ){
            cout << "*" ;
        }

        cout << '\n' ;
    }

}
   

void nStarTriangle(int n) {

    nForest(n) ;
    seeding(n-1) ;
}
    

int main(int argc , char const *argv[]){
    
    int n = 4 ; 


    nStarTriangle(n) ;


    // std::cin.get();
    return 0;
}
