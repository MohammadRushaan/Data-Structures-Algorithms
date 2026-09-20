#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    vector <int> vec = {1,2,3,4,5};

    cout << vec.size() << endl;

    vec.push_back(6);
    for (int val: vec)
    {
        cout << val << endl;
    }

    vec.pop_back(); // it will remove value at last

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(3) << endl;

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}