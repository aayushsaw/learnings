#include <iostream>
using namespace std;

int main(){

    int n = 9;

    for (int i = 0; i < n; i++)
    {
        for (int j = i;j < n-1; j++)
        {
            cout <<" ";
        }
        
        for (int j = 0; j < i +1; j++)
        {
            cout << j+1;
        }

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        
        cout << endl;
        
    }
    
}