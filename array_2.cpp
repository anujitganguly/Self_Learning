//QUESTION: How do you find the duplicate number on a given integer array?


#include<iostream>
#define MAX 100
using namespace std;

int main()
{
    int arr[MAX];
    int num;
    int i, j;
    cout<<"Enter the size of the array: ";
    cin>>num;
    cout<<"Enter the elements of the array:-"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)		//If j=i+1 is not sone then arr[i]=arr[j]. Hence code would have kept checking itself with same array element.
        {
            if(arr[i]==arr[j])
                cout<<"Duplicate element: "<<arr[i]<<endl;
        }
    }
        return 0;
}
