#include <iostream>
#include <string>
using namespace std ;

int main (){
    char x  ;
    cout << " Nhap chu thuong  : " ;
    cin >> x ;
    char y = toupper( x);
    char z = y ;
    cout << " chu in hoa :" << z << "\n " ;
    
    char a ;
    cout << " Nhap chu hoa : " ;
    cin >> a ;
    char b = tolower (a);
    char c = b;
    cout << " chu thuong : " << c ;
    return 0 ;  
}