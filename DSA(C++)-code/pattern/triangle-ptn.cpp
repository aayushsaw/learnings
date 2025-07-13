# include <iostream>
using namespace std;

int main (){

    int n=5;

// Output :
// 1
// 12
// 123
// 1234
// 12345

    // for (int i= 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << j+1 << " "; 
    //     }
    //     cout << endl;
    // }
    

// output :
// 1
// 21
// 321
// 4321
// 54321


    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}