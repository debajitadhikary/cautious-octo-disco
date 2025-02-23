#include<bits/stdc++.h>
using namespace std ;

/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
1         1
1 2     2 1
1 2 3 3 2 1

----------------------------------------------------------------
Sample Input 2 :
4

Sample Output 2 :
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1

----------------------------------------------------------------
Sample Input 3 :
7

Sample Output 3 :
1                         1
1 2                     2 1
1 2 3                 3 2 1
1 2 3 4             4 3 2 1
1 2 3 4 5         5 4 3 2 1
1 2 3 4 5 6     6 5 4 3 2 1
1 2 3 4 5 6 7 7 6 5 4 3 2 1  

----------------------------------------------------------------
*/



void numberCrown(int n) {

    const int max_col = n * 4 -1 ;


    for( int row = 1 ; row <= n ; ++row ){

        int curr_total_digits = row * 2 + (row - 1) * 2 + 1 ;

        int whitespace = max_col - curr_total_digits ;

        for(int k = 1 ; k <= row ; ++k ){
            cout << k << ' ' ;
        }

        for(int i = 1 ; i <= whitespace ; ++i ) cout << ' ' ;

        for(int k = row ; k >= 1 ; --k ){
            cout << k << ' ' ;
        }


        cout << '\n' ;
    }       
}



int main(int argc , char const *argv[]){
  
    int n = 7 ; 


    numberCrown(n) ;


    // std::cin.get();
    return 0;
}
