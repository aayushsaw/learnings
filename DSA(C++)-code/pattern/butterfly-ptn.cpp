#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    // TOP

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        

        if (i != n - 1)
        {
            for (int j = 0; j < 2 * (n - i)-2; j++)
            {
                cout << " ";
            }
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // BOTTOM

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }

        if (i != 0)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            
        }

        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        
        cout << endl ;
        
    }
    
}