#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
1
2 3
4 5 6

----------------------------------------------------------------
Sample Input 2 :
4

Sample Output 2 :
1
2 3
4 5 6 
7 8 9 10

----------------------------------------------------------------
Sample Input 3 :
7

Sample Output 3 :
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28

----------------------------------------------------------------
*/


void nNumberTriangle(int n) {

    int bit = 1 ; 

    for(int row = 1 ; row <= n ; ++row ){
        for(int col = 1 ; col <= row ; ++col ){

            cout << bit++ << ' ' ;
        }

        cout << '\n' ;
    }

}

int main(int argc , char const *argv[]){
  
    int n = 7 ; 

    nNumberTriangle(n) ;


    // std::cin.get();
    return 0;
}
