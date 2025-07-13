#include <iostream>
using namespace std;

int prime(int n)
{
    bool isPrime = true;

    for (int i = 2; i <= n-1; i++)
    {

        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

        if (isPrime == true)
        {
            cout << "Prime \n";
        }
        else
        {
            cout << "Non Prime \n";
        }
}

int main()
{
    cout << prime(8) << endl;

    return 0;
}