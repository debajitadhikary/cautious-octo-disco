#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
* * 
* * 

----------------------------------------------------------------
*/

void symmetry(int n) {
    
    int total = n * 4 - 1 ;

    // upper part : 
    for(int i = n ; i >= 1 ; --i ){

        int curr_chars = 2 * i + ( i - 1 ) * 2 +1 ;

        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ;

        }
        
        int space = total - curr_chars ;
        
        for(int k = 1 ; k <= space ; ++k ) cout << ' ' ;
        
        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ;
            
        }
        
        // cout << " | " << space << " " << curr_chars ;
        cout << '\n' ;
    }


    // lower part : 
    for(int i = 1 ; i <= n ; ++i ){

        int curr_chars = 2 * i + ( i - 1 ) * 2 +1 ;

        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ;

        }
        
        int space = total - curr_chars ;
        
        for(int k = 1 ; k <= space ; ++k ) cout << ' ' ;
        
        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ;
            
        }
        
        // cout << " | " << space << " " << curr_chars ;
        cout << '\n' ;
    }
    
}


int main(int argc , char const *argv[]){
  
    int n = 3 ; 

    symmetry(n) ;


    // std::cin.get();
    return 0;
}
