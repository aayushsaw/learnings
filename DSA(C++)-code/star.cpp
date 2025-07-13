# include <iostream>
using namespace std;

int main(){

    int m = 10;
    // cout <<"Enter the Value of m : ";
    // cin >> m;

    int n =5;
    // cout <<"Enter the Value of n : ";
    // cin >> n;


    for (int i = 1; i <= m; i++)
    {
        
        for (int j = 1; j <= n; j++)
        { 
            cout <<"*";
        }
        cout << endl;
    }
    
    return 0;
}