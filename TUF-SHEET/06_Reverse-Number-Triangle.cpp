#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
1 2 3
1 2
1

----------------------------------------------------------------
Sample Input 2 :
4

Sample Output 2 :
1 2 3 4
1 2 3
1 2
1

----------------------------------------------------------------
Sample Input 3 :
7

Sample Output 3 :
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

----------------------------------------------------------------
*/


void nNumberTriangle(int n) {
    
    for(int i = n ; i >= 1 ; --i ){

        for(int j = 1 ; j <= i ; ++j ){
            cout << j << ' ';
        }

        cout << '\n' ;
    }

}
    

int main(int argc , char const *argv[]){
    
    int n = 4 ; 


    nNumberTriangle(n) ;


    // std::cin.get();
    return 0;
}
