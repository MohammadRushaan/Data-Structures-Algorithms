#include <iostream>
#include <cmath>

using namespace std;

double power(int a)
{
    return pow(2,a);
}

int main()
{
    int num=0 ;
    double res;
    int pow=0;

    cout << " Enter Binary number :\n";
    cin >> num;

    for(int i=num; i>0; i=i/10)
    {
        int d= i%10;
        res = res+ (d*power(pow));
        pow++;
    }

    cout << "Decimal Equivalent is: " << res << "\n";

    return 0;
}