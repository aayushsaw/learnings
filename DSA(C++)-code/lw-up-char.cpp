#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter The Character : ";
    cin >> ch ;

    // if (ch >='a' && ch <='z')
    // {
    //     cout <<"Character is lowercase";
    // }
    // // else if (ch >= 'A' && ch <= 'Z')
    // // {
    // //     cout <<"Character is Uppercase";
    // // }
    // else
    // {
    //     cout <<"Character is Uppercase";
    // }

    // Code using Ascii value
    //A to Z = 65 to 90
    //a to z = 97 to 123

    if (ch >=65 && ch <=90)
    {
        cout <<"Character is Uppercase";
    }
    else
    {
        cout <<"Character is Lowercase";
    }
    
    

    return 0;
}