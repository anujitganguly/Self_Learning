//QUESTION: How do you find the missing number in a given integer array of 1 to 100?

//TRICK: The sum of (1…N) = (N*(N+1)/2). For 100, this is 5050.
//So the solution is to subtract the sum of the array from 5050. No Sorting and Searching needed.

#include<iostream>
#define MAX 100         //100 can be changed as per requirement
using namespace std;

int main()
{
    int arr[MAX];
    int n, i, j, k;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    k=(n+1)*(n+2)/2;        //Here we are missing 1 element which means we should replace N with (N+1)
                            //So the total of elements in our case becomes: (N+1)(N+2)/2
    for(j=0;j<n;j++)
    {
        k=k-arr[j];
    }
    cout<<"Missing number is: "<<k;
    return 0;
}
