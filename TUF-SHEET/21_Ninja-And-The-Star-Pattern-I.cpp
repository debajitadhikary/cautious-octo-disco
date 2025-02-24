#include<bits/stdc++.h>
using namespace std ;



/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
***
* *
***
    
----------------------------------------------------------------
Sample Input 2 :
5

Sample Output 2 :
*****
*   *
*   *
*   *
*****

----------------------------------------------------------------
Sample Input 3 :
8

Sample Output 3 :
********
*      *
*      *
*      *
*      *
*      *
*      *
********

----------------------------------------------------------------
*/


void getStarPattern(int n) {

    for(int i = 1 ; i <= n ; ++i ) cout << '*' ;  // first row 

    cout << '\n' ;
    
    if( n == 1) return ;

    int mid_rows = n - 2 ,  whitespace = n - 2 ; 

    for(int row = 1 ; row <= mid_rows ; ++row ){
        
        cout << '*' ; 
        
        for(int i = 1 ; i <= whitespace ; ++i ) cout << ' ' ;

        cout << '*' ; 

        cout << '\n' ;
    }
    
    
    for(int i = 1 ; i <= n ; ++i ) cout << '*' ;  // last row 

    cout << '\n' ;

}


int main(int argc , char const *argv[]){
  
    int n = 4 ; 

    getStarPattern(n) ;



    // std::cin.get();
    return 0;
}
