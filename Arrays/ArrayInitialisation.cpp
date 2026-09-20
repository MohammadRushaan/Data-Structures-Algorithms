#include <iostream>

using namespace std;

void changeArr(int arr[], int size)
{
    cout << "In func \n";
    for(int i=0 ; i<size; i++)
    {
        arr[i]= 2*arr[i];
    }
}
void reverseArr(int arr[], int size)
{
    int start =0;
    int end = size-1;
    while(start < end)
    {
        //swap(marks[start],marks[end]); // swap function swaps the values
        int temp= arr[start];
        arr[start] = arr[end];
        arr[end] =temp;
        start++;
        end++;
    }
}
void printArr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << endl;
    }
}
void inputArr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}
void LinearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]== key)
        {
            cout << "Element found at index: "<< i << endl;
            break;
        }
        if( i== size-1);
            cout << "Element not found \n";
    }
}

int main()
{
    int marks[5]= {99,72,87,54,83};
    // array marks with size 50 with first 5 elements

    double price[]= {99.98,26.32,34.57};

    // Every postion in the array is called index
    //indices start from 0

    int first = marks[0]; //accesing marks element at index 0
    int size= sizeof(marks) / sizeof(marks[0]);

    // Taking array input
    cout << " Enter Array elements \n";
    inputArr(marks, size);
    
    
    cout << " Array elements are :\n";
    // Display array elements
    printArr(marks, size);

    // find largest and smallest in array
    int large=INT32_MIN; // holds -ve infinity
    int small= INT32_MAX; // holds +ve infinity

    for(int i=0; i<size; i++)
    {
        int elem =marks[i];
        /** if(elem>max)
            max=elem;
        if(elem<min)
            min =elem;
            **/
        small = min(elem, small);
        large = max(elem, large);
    }
    cout << large << endl;
    cout << small << endl;

    // Pass by reference
    int arr[]= {1,2,3};
    changeArr(arr, 3);

    cout << "In main \n";
    for(int i=0; i<3; i++)
    {
        cout << arr[i] << endl;
    }

    // Linear search
    // Sequentially search each index to match whether the target elements exist or not 
    int key = 54;
    LinearSearch(marks, size, key);

    // Reverse an array without a new array
    // two pointer approach
    reverseArr(marks, size);

    return 0;
}