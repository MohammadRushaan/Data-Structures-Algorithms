#include <iostream>

using namespace std;

int main()
{
    int size;
    char ch;

    cout << " Enter size of square\n";
    cin >> size;
    
    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            cout << "@ ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(int row=0; row<size; row++)
    {
        for(int col=1; col<=size; col++)
        {
            cout << col << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    
    for(int row=1; row<=size; row++)
    {
        for(int col=1; col<=size; col++)
        {
            cout << row << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(int row=1; row<=size; row++)
    {
        char ch ='A';
        for(int col=1; col<=size; col++)
        {
            cout << ch << " ";
            ch=ch+1;
        }
        cout << "\n";
    }

    cout << "\n";

    int num =1;
    for(int row=1; row<=size; row++)
    {   
        for(int col=1; col<=size; col++)
        {
            cout << num << " ";
            num=num+1;
        }
        cout << "\n";
    }

    cout << "\n";

    char ch2='A';
    for(int row=1; row<=size; row++)
    {   
        for(int col=1; col<=size; col++)
        {
            cout << ch2 << " ";
            ch2=ch2+1;
        }
        cout << "\n";
    }

    cout << "\n";

    return 0;
}