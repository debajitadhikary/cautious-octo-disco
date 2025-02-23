#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
    A
  A B A
A B C B A

----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
A

----------------------------------------------------------------
Sample Input 3 :
7

Sample Output 3 :
            A 
          A B A 
        A B C B A 
      A B C D C B A 
    A B C D E D C B A 
  A B C D E F E D C B A 
A B C D E F G F E D C B A 

----------------------------------------------------------------
*/


void alphaHill(int n) {

    for(int row = 1 ; row <= n ; ++row ){

        char ch = 'A' ;

        for(int i = n - 1  ; i >= row; --i ){
            cout << "  " ;
        }

        for(int j = 1 ; j <= row ; ++j ){
            cout << ch++ << ' ' ;
        }

        --ch ;

        for(int k = 1 ; k <= row -1 ; ++k ){
            cout << --ch << ' ' ;
        }

        cout << '\n' ;
    }

}


int main(int argc , char const *argv[]){
  
    int n = 7 ; 

    alphaHill(n) ;


    // std::cin.get();
    return 0;
}
