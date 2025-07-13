#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter Your Age : ";
    cin >> n;
    if (n >= 18)
    {
        cout <<"You can Vote\n";
    }
    else
    {
        cout <<"You are unable to Vote\n";
    }
    
    return 0;
}