//QUESTION: How do you find the duplicate numbers in an array if it contains multiple duplicates?

#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    int arr[MAX];
    int num, i, j, k;
    cout<<"Enter size of array";
    cin>>num;
    cout<<"Enter elements of array:"<<endl;
    for(i=0;i<num;i++)
        {
            cin>>arr[i];
        }
    cout<<"Duplicate elements are: "<<endl;
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
                {
                    cout<<arr[i]<<endl;
                }
        }
    }
    return 0;
}
