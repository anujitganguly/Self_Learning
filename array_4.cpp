//QUESTION: How do you find all pairs of an integer array whose sum is equal to a given number?

//TRICKS:
//1. Add each element in the array to all remaining elements (except itself)
//2. Verify if sum is equal to the required number
//3. If true then print their indices


#include<iostream>
#define MAX 100
using namespace std;

int main()
{
    int arr[MAX];
    int i, j, n, k;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter your required number: ";
    cin>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(arr[i]+arr[j]==k && i!=j)
                    {
                        cout<<i++<<", "<<j++<<"; "<<endl;  //sometimes more results may be shown due to change of compiler
                    }
            }
    }
    return 0;
}
