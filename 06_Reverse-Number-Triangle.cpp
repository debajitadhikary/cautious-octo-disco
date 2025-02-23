#include<bits/stdc++.h>
using namespace std ;



void nNumberTriangle(int n) {
    
    for(int i = n ; i >= 1 ; --i ){

        for(int j = 1 ; j <= i ; ++j ){
            cout << j << ' ';
        }

        cout << '\n' ;
    }

}
    

int main(int argc , char const *argv[]){
    
    int n = 4 ; 


    nNumberTriangle(n) ;


    // std::cin.get();
    return 0;
}
