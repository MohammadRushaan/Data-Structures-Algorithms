#include <iostream>
#include <vector> // or #include <bits/c++.h>, not advised, to prevent namespace conflicts

using namespace std;

int main()
{
    vector <int> vec= {1,2,3};

    cout << vec[0] << endl;

    vector <int> vec2(3,0);
    // size is 3 
    // value at each index is 0

    cout <<vec2[1] << endl;

    // we use a for each loop on vectors
    for(int val: vec)
    {
        cout << val << endl;
    }
    return 0;
}