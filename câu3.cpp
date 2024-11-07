#include <iostream>
using namespace std ;

int main (){
    int a = 3 ; 
    int b = 4 ;
    int c = a ;
    a = (int)b;
    b = c ;
    cout << a << "\n" ;
    cout << b ; 
    return 0 ;
    
}