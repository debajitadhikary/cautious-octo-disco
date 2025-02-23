#include<bits/stdc++.h>
using namespace std ;



/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
1 
2 2 
3 3 3

----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
1

----------------------------------------------------------------
Sample Input 3 :
5

Sample Output 3 :
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

----------------------------------------------------------------
*/

void nTriangle(int n) {

    for(int i = 1 ; i <= n ; ++i ){

        for(int j = 1 ; j <= i ; ++j ){
            cout << i << ' ' ;
        }
        cout << '\n' ;
    }

}
    
int main(int argc , char const *argv[]){
    
    int n = 5 ; 


    nTriangle(n) ;


    // std::cin.get();
    return 0;
}
