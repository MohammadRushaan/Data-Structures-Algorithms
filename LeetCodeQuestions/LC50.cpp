/**
 * Binary exponentiation
 * 
 * direct looping will be of complexity O(n) - will go upto 2^31
 * but leetcode with not do more than 10^8 ops
 * hence time out error
 * 
 * for any decimal digit n , there are atmost log base 2 (n)+1 digits
 * 
 * in Binary exponentiation
 * we loop over the digits of binary form of power
 * which reduces time complexity to O(logn)
 * 
 * in case of negative power 
 * change the num from n to 1/n and let the pwoer be positive
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number\n";
    double num;
    cin >> num;

    cout << "Enter the binary form of power\n";
    long power;
    cin >> power;

    double ans=1.0;

    if (num < 0)
        num = -1/num;

    while(power > 0)
    {
        if(power %2 ==1)
            ans=ans*num;
        
            num*=num;
            power = power/10;
    }

    cout << ans << endl;

    return 0;
}