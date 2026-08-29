#include <iostream>

using namespace std;

int main()
{
    int size;
    char ch;

    cout << " Enter size of square\n";
    cin >> size;
    cout << " Enter character to enter\n";
    cin >> ch;

    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }

    return 0;
}