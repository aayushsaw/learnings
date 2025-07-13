#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter The number : ";
    cin >> n;

    int oddsum = 0;

    // for (int i = 0;i <= n; i++)
    // {
    //     if(i%2 == 0){
    //         cout << i << " ";
    //     }
    //     else
    //     {
    //         oddsum += i;
    //     }
        
       
    // }
    // cout << " Sum is : " << oddsum << endl;

    // for(int i =1;i <=n; i++){
    //     if(i%2 !=0){
    //         oddsum += i ;
    //     }
    // }
    // cout << oddsum;

    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            oddsum += i;  
        }
        i++;
    }
    cout << oddsum;

    return 0;
}