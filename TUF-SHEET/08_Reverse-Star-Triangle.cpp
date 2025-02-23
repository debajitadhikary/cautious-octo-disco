#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
*****
 ***
  *

Explanation Of Sample Input 1 :
-> The first row contains five stars.
-> The second row contains one space, followed by three stars.
-> The third row contains two spaces, followed by a star.

----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
*

----------------------------------------------------------------
Sample Input 3 :
7

Sample Output 3 :
*************
 ***********
  *********
   *******
    *****
     ***
      *

----------------------------------------------------------------
*/


void nStarTriangle(int n) {
    
    for(int i = n ; i >= 1 ; --i ){

        for(int k = n -1  ; k >= i  ; --k){
            cout << ' ' ;
        }

        int max_l = 2 * i - 1 ; 

        for(int j = 1 ; j <= max_l ; ++j ){
            cout << '*' ;
        }

        cout << '\n' ;
    }

}
    

int main(int argc , char const *argv[]){
    
    int n = 7 ; 


    nStarTriangle(n) ;


    // std::cin.get();
    return 0;
}
