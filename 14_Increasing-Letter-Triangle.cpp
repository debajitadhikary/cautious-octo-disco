#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
A
A B
A B C

----------------------------------------------------------------
Sample Input 2 :
4

Sample Output 2 :
A
A B
A B C 
A B C D

----------------------------------------------------------------
Sample Input 3 :
7

Sample Output 3 :
A
A B
A B C 
A B C D
A B C D E
A B C D E F
A B C D E F G

----------------------------------------------------------------
*/


void nLetterTriangle(int n) {


    for(int row = 1 ; row <= n ; ++row ){

        char ch = 'A' ;
        for(int col = 1 ; col <= row ; ++col ){

            cout << ch++ << ' ' ;
        }

        cout << '\n' ;
    }

}

int main(int argc , char const *argv[]){
  
    int n = 7 ; 

    nLetterTriangle(n) ;


    // std::cin.get();
    return 0;
}
