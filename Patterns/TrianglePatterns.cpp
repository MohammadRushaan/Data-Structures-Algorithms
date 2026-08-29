# include <iostream>

using namespace std;

int main()
{
    int size;
    char ch;

    cout << " Enter size of square\n";
    cin >> size;

    cout << "\n";

    for(int row=1; row<=size; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout <<"* ";
        }
        cout << "\n";
    }
    cout << "\n";

    for(int row=1; row<=size; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout <<row << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    char ch2='A';
    for(int row=1; row<=size; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout <<ch2 << " ";
        }
        ch2 =ch2 +1;
        cout << "\n";
    }
    cout << "\n";

    for(int row=1; row<=size; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout <<col << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for(int row=1; row<=size; row++)
    {
        for(int col=row; col>=1; col--)
        {
            cout <<col << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    int floyd=1;
    for(int row=1; row<=size; row++)
    {
        for(int col=row; col>=1; col--)
        {
            cout <<floyd << " ";
            floyd+=1;
        }
        cout << "\n";
    }
    cout << "\n";

    ch2='A';
    for(int row=1; row<=size; row++)
    {
        for(int col=row; col>=1; col--)
        {
            cout <<ch2 << " ";
            ch2+=1;
        }
        cout << "\n";
    }
    cout << "\n";

    // Inverted Triangle
    for(int row=1; row<=size; row++)
    {
        for(int spaces=1; spaces<row; spaces++)
        {
            cout << " ";
        }
        for(int col=row; col<=size; col++)
        {
            cout << row ;
        }
        cout << "\n";
    }
    cout << "\n";

    ch2='A';
    for(int row=1; row<=size; row++)
    {
        for(int spaces=1; spaces<row; spaces++)
        {
            cout << " ";
        }
        for(int col=row; col<=size; col++)
        {
            cout << ch2 ;
        }
        ch2+=1;
        cout << "\n";
    }
    cout << "\n";


    // pyramid pattern

    for(int row=1; row<=size; row++)
    {
        for(int spaces=row+1; spaces<=size; spaces++)
        {
            cout << " ";
        }
        for(int col=1; col<=row; col++)
        {
            cout << col;
        }
        for(int pyrR=row-1; pyrR>=1; pyrR--)
        {
            cout << pyrR;
        }
        cout << "\n";
    }
    cout << "\n";


    // Hollow Diamond pattern
    //above
    for(int row=1; row<=size; row++)
    {
        for(int spaces=row+1; spaces<=size; spaces++)
        {
            cout << " ";
        }
        for(int col=1; col<=row; col++)
        {
            if(col==1)
                cout<< "*";
            else
                cout << " ";
        }
        for(int pyrR=row-1; pyrR>=1; pyrR--)
        {
            if(pyrR==1)
                cout << "*";
            else
                cout<< " ";
        }
        cout << "\n";
    }
    //bottom
    for(int row=2; row<=size; row++)
    {
        for(int spaces=1; spaces<size; spaces++)
        {
            if(spaces==row)
                cout<< "*";
            cout << " ";
        }
        for(int spaces2=row; spaces2<size-1; spaces2++)
        {
            cout << " ";
        }
        cout << "*";
        cout <<"\n";
    }
    cout << "\n";

    //Butterfly pattern
    //Upper
    for(int row=1; row<=(size); row++)
    {
        for(int col=1; col<=(row); col++)
        {
            cout << "*";
        }

        for(int spaces=row+1; spaces<=((size*2)-row); spaces++)
        {
            cout<< " ";
        }

        for(int col2= (size-row); col2<(size); col2++)
        {
            cout<< "*";
        }
        cout<< "\n";
    }
    //lower
    for(int row=0; row<size; row++)
    {
        for(int col=1; col<=(size-row); col++)
        {
            cout << "*";
        }
        for(int spaces=size; spaces>(size-row); spaces--)
        {
            cout << " ";
        }

        for(int spaces=0; spaces<row; spaces++)
        {
            cout << " ";
        }
        for(int col=row; col<size; col++)
        {
            cout<<"*";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}