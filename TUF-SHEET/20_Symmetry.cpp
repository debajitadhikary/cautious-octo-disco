// #include<bits/stdc++.h>
#include<iostream>


using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
*         *
* *     * *
* * * * * *
* *     * *
*         *

----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
*

----------------------------------------------------------------
*/


void symmetry(int n) {


    int total_chars = n * 4 - 1 ;

    // upper part : 
    for(int i = 1 ; i <= n ; ++i ){

        int curr_chars = i * 2 + ( i - 1)* 2 + 1 ; 

        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ; 
        }
        
        int whitespace = total_chars - curr_chars ;

        for(int k = 1 ; k <= whitespace ; ++k ){
            cout << ' ' ;
        }

        
        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ; 
        }
        
        cout << '\n' ;

    }


    // lower part : 
    for(int i = n-1 ; i >= 1 ; --i ){

        int curr_chars = i * 2 + ( i - 1)* 2 + 1 ; 

        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ; 
        }
        
        int whitespace = total_chars - curr_chars ;

        for(int k = 1 ; k <= whitespace ; ++k ){
            cout << ' ' ;
        }

        
        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ; 
        }
        
        cout << '\n' ;

    }

}

int main(int argc , char const *argv[]){
  

    int n = 3 ; 

    symmetry(n) ;


    // std::cin.get();
    return 0;
}
