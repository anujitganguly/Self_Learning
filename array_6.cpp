//QUESTION: How are duplicates removed from a given array in C++?

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

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<num;k++)
                {
                    arr[k]=arr[k+1];
                }
                num--;
                j--;
            }
        }
    }
    cout<<"Array after deletion:"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;
}
