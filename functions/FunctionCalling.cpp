#include <iostream>

using namespace std;

int sumDigit(int a)
{
    int res=0;
    for(int i=a;i>0; i=i/10)
    {
        res= res + (i%10);
    }
    return res;
}
int factorial(int n)
{
    int prod=1;
    for(int i=1; i<=n; i++)
        prod= prod*i;
    
        return prod;
}
int binomialCoeff(int n ,int r)
{
    int res  = factorial(n)/(factorial((n-r)) * factorial(r));
    return res;
}

void Fibonacci(int n)
{
    int a=0;
    int b=1;

    cout << a << " ";
    cout << b << " ";
    for(int i=1; i<=n; i++)
    {
        int temp =b;
        b=b+a;
        a= temp;
        cout << b << " ";
    }
}

int main()
{
    int num1;
    int num2;

    cout << " Enter a number1\n";
    cin >> num1;
    cout << " Enter a number2\n";
    cin >> num2;

    cout << " Sum of digit of num: " << sumDigit(num1) << endl;
    cout << " factorial of num1: " << factorial(num1) << endl;
    cout << " Binomial Coeff : " << binomialCoeff(5,2) << endl;

    Fibonacci(8);

    
    return 0;
}