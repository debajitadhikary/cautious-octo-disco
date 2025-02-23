#include<bits/stdc++.h>
using namespace std ;



void nForest(int n) {
	
    for(int i = 1 ; i <= n ; ++i ){
        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ;
        }
        cout << '\n';
    }
}


int main(int argc , char const *argv[]){
    
    int n = 4 ; 


    nForest(n) ;


    // std::cin.get();
    return 0;
}
