/**
 * Return pair in sorted array with target sum
 * sorted in ascending
 * Brute force: Find all pairs and their  , complexity O(n^2)
 */

 #include <iostream>
 #include <vector>

 using namespace std;

 /**int main()
 {
    vector<int> arr= {2,7,11,15};
    vector<int> ans;
    int target=18;
    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if((arr[i]+arr[j])==target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
 }
    */

 /**
  * Optimal approach will be using 2 pointers
  * start from smallest and largest 
  * is sum > target, reduce largest 
  * if sum < target , increase smallest
  */

  int main()
  {
    vector<int> arr= {2,7,11,15};
    vector<int> ans;
    int target=18;
    int n = arr.size();
    int start= 0;
    int end= n-1;

    while(start < end)
    {
        int sum = arr[start]+ arr[end];
        if((sum) > target)
            end --;
        else if( sum <target)
            start ++;
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            break;
        }

    }

    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
  }

  // complexity O(n);