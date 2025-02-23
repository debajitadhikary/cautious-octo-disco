#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
A
B B
C C C

----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
A

----------------------------------------------------------------
Sample Input 3 :
4

Sample Output 3 :
A
B B
C C C
D D D D

----------------------------------------------------------------
*/


void alphaRamp(int n) {

    char ch = 'A' ;

    for(int row = 1 ; row <= n ; ++row ){

        for(int col = 1 ; col <= row ; ++col ){
            cout << ch << ' ' ;
        }

        ++ch ; 

        cout << '\n' ;
    }

}


int main(int argc , char const *argv[]){
  
    int n = 7 ; 

    alphaRamp(n) ;


    // std::cin.get();
    return 0;
}
