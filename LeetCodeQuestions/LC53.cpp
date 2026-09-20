/**
 * Kadane's Algorithm
 * 
 * Solve the problem of Maximum subarray Sum
 * 
 * Works on intuition
 * +ve + +ve ---- +ve
 * small -ve + +ve ----- +ve
 * but big -ve + small +ve 
 * or big -ve + gibe -ve are not of use
 * 
 * Kadane says whenever your subarray sum is negative reset it to zero which translates to ,  not using that subarray 
 * 
 */
#include <iostream>

using namespace std;

int main()
{
    int n=7;
    int arr[]= {3,-4,5,4,-1,7,-8};

    int maxSum= INT32_MIN;
    int curSum=0;

    for(int start=0; start<n; start++)
    {
        curSum= curSum+ arr[start];
        maxSum= max(maxSum, curSum);
        if(curSum < 0)
        {
            curSum=0;
        }
    }

    cout << "Max Subarray sum: " << maxSum << endl;
    return 0;
}