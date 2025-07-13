#include <iostream>
using namespace std;


int sumOfDigit(int num){
    int digitSum = 0;

    while (num > 0)
    {
        int lastdigit = num % 10 ;
        num /= 10;

        digitSum += lastdigit;
    }
    return digitSum;
}

int main(){
    cout << "sum = " << sumOfDigit(2345) << endl;

    return 0;
}