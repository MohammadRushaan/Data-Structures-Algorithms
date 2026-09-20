/**
 * SubArray is a continuous part of an array
 * eg 12345 in an array
 * 1 ,2 ,3,4,5 are five individual subarrays
 * 12,23,34,45 are also subarray
 * and so are 123, 234 ,345
 * 1234, 2345,
 * 12345 is also a subarray of 12345
 * For an array of size n , total no. of sub arrays are (n*(n+1)/2)
 * If we fix the start pointer , then we can find patterns using end pointer
 * First we try Brute force approach that involves 2 nested loops and has complexity O(n^2)
 */
/** 
 * Now we have to find the maximum subarray sum i.e. Subarray with maximum sum
 * Brute force appraoch find each subarray and its sum
 * Instead of each individual additions for anew subarray use the olde subarray and add 
 * the new number in it
 */
#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int arr[]= {1,2,3,4,5};

    int maxSum= INT32_MIN;

    for(int start=0; start<n; start++)
    {
        int curSum=0;
        for(int end=start; end<n; end++)
        {
            curSum= curSum+ arr[end];
            maxSum= max(maxSum, curSum);
        }
        cout << endl;
    }

    cout << "Max Subarray sum: " << maxSum << endl;
    return 0;
}