// # include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout <<"Enter the number : ";
//     cin >> n;

//     int sum =0;
//     for (int i = 1; i<= n; i++)
//     {
//         sum =sum+i ;
       
//     }
//      cout <<"sum = "<< sum << endl;

//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number : ";
    cin >> n ;

    int sum = 0 ;
    int i = 1 ;

    while (i <= n)
    {
        sum = sum + i ;
        i++;
    }
    cout << "sum is : "<< sum <<endl ;
    return 0;
}