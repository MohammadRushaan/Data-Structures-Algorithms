/**
 * Given an array of size n
 * majority element is the element that appears more than n/2 times
 * 
 * Brute Force Approach , complexity O(n^2) -two loops , calculate freq of each element
 * 
 * Optimised Approach - Sort the array first , O(nlogn+n)- calc freq per element as you 
 * move forward with continuous condition check
 * freq=0; ans=num[0];
 * for(i=1;i<n;i++)
 * if num[i]==num[i-1]
 * freq++
 * else
 * freq=1; ans=num[i]
 * 
 * 
 * Moore's voting algorithm
 * if any elem with majority(>n/2) exists
 * then compare the freq of elements of array, is same elemt freq++, else freq--
 * the majority will always have highest freq
 * 
 */

 #include <iostream>
 #include <vector>

 using namespace std;

 int main()
 {
    vector<int> arr= {1,2,2,1,1};

    int freq=0, ans=0; 

    for(int i=0; i<arr.size(); i++)
    {
        if(freq==0)
            ans=arr[i];
        if(ans== arr[i])
            freq++;
        else
            freq--;
    }
//In case of no majority failsafe check
    int count=0;
    for(int val : arr)
    {
        if(val == ans)
            count++;
    }

    if(count > (arr.size()/2))
        cout << ans << endl;
    else
        cout <<"1\n";
}