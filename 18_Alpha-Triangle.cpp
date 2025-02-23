#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
C
C B 
C B A

----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
A

----------------------------------------------------------------
Sample Input 3 :
7

Sample Output 3 :
G 
G F
G F E
G F E D
G F E D C
G F E D C B
G F E D C B A

----------------------------------------------------------------
*/

void alphaTriangle(int n) {

    const char p_ch = 'A' + n - 1  ; 

    for(int row = 1 ; row <= n ; ++row ){
        
        char ch = p_ch;

        for(int col = 1 ; col <= row ; ++col ){
            cout << ch-- << ' ' ;
        }

        cout << '\n' ;
    }
}


int main(int argc , char const *argv[]){
  
    int n = 7 ; 

    alphaTriangle(n) ;


    // std::cin.get();
    return 0;
}
