//QUESTION: How do you find the largest and smallest number in an unsorted integer array?

//THRICK: in Line 18 & 24, assigning initial values as Max and Min is the only logic needed to solve

#include<iostream>
#define M 100
using namespace std;

int main()
{
    int i, max, min, n;
    int arr[M];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    cout<<"Largest Element is: "<<max<<endl;
    cout<<"Smallest Element is: "<<min<<endl;
    return 0;
}
