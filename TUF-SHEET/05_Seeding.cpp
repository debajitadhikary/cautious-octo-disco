#include<bits/stdc++.h>
using namespace std ;


/*
----------------------------------------------------------------
Sample Input 1:
3

Sample Output 1:
* * *
* *
*
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
* * *
* *
*

----------------------------------------------------------------
*/



void seeding(int n) {
    
    for(int i = n ; i >= 1 ; --i ){

        for(int j = 1 ; j <= i ; ++j ){
            cout << "* " ;
        }

        cout << '\n' ;
    }

}
    

int main(int argc , char const *argv[]){
    
    int n = 4 ; 


    seeding(n) ;


    // std::cin.get();
    return 0;
}
