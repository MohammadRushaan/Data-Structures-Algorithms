/**
 * Bitwse XOR is used to compare two elements 
 * It returns zero if both are same
 * n^n =0
 * We apply XOR to the entire Vector 
 * n^0 =n
 * 
 */
#include <iostream>
#include <vector> 

using namespace std;

int singleNumber(vector<int>& nums) 
{
    int res=0;
    for(int val: nums)
    {
        res = res ^ val;
    }
    return res;
}
int main()
{
    vector <int> vec= {4,1,2,1,2};
    cout << singleNumber(vec) << endl;

    return 0;
}