#include <iostream>
#include <cmath>

using namespace std;

double power(int a)
{
    return pow(10,a);
}

int main()
{
    int num=0 ;
    double res;
    int pow=0;

    cout << " Enter decimal number :\n";
    cin >> num;

    for(int i=num; i>0; i=i/2)
    {
        int rem= i%2;
        res = res+ (rem*power(pow));
        pow++;
    }

    cout << " Binary Equivalent is: " << res << "\n";
    return  0;
}