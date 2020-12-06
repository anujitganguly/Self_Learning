//QUESTION: How do you find the duplicate numbers in an array if it contains multiple duplicates?
//TRICK: Here we need two different arrays

//NEEDS CORRECTION
#include<iostream>
#define MAX 100
using namespace std;

int main()
{
    int n, i, j;
    int arr[MAX], arr2[MAX];
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter the elements in the array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(arr2[j]==0)
            {
                if(arr[i]==arr2[j])
                    cout<<arr[i];
            }
        }
    }
    return 0;
}
