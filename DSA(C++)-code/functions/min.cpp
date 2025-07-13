#include <iostream>
using namespace std;

int min(int a,int b){
    if (a <= b)
    {
        return a;
    }else
    {    
        return b;
    }

}
int main(){

    cout << "Min of given number is : " << min(5,10) << endl;
    return 0;
}