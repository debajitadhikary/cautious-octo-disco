#include<bits/stdc++.h>
using namespace std ;

/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
* * *
* * *
* * *

Explanation Of Sample Input 1 :
For N = 3, fill all the rows and columns in 3x3 matrix with ‘*’.
----------------------------------------------------------------
Sample Input 2 :
1

Sample Output 2 :
*

----------------------------------------------------------------
Sample Input 3 :
4

Sample Output 3 :
* * * *
* * * *
* * * *
* * * *

----------------------------------------------------------------
*/

void nForest(int n) {

    for(int i = 1 ; i <= n ; ++i ){  

        for(int j = 1 ; j <= n ; ++j ){
            cout << "* " ;
        }

        cout << '\n' ;
    }
    
}



int main(int argc , char const *argv[]){
    
    int n = 4 ; 


    nForest(n) ;


    // std::cin.get();
    return 0;
}
