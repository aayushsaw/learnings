#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++) {

        if (i %  3 == 0)
        {
            sum += i;
        }    
         
    }
    cout << "Sum of divisble by 3 upto " << n << " natural numbers is: " << sum << endl;

    return 0;
}