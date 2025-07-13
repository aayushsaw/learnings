#include<iostream>
using namespace std;

int main () {

    int a,b,c;

    cout <<"Enter a : ";
    cin >> a ;

    cout <<"Enter b : ";
    cin >> b;

    c = a+b;
    cout <<"Addition of a + b = " << c << endl;
    
    c = a-b;
    cout <<"subtraction of a - b = " << c << endl;

    c = a*b;
    cout <<"Multiplication of a * b = " << c << endl;

    c = a/b;
    cout <<"Division of a / b = " << c << endl;

    c = a%b;
    cout <<"Modulo of a % b = " << c << endl;
     return 0;
}