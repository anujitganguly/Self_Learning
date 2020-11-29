//QUESTION: Write a code for Quick Sort
/*TRICK:
    1. Assume a PIVOT (can be the 1st, last or any random element).
    2. All elements smaller than PIVOT are placed in left while larger ones at right.
    3. Repeat the above steps for both halves.
    NOTE: Here the first element is assumed as PIVOT*/

#include<iostream>
using namespace std;

int pivot(int a[], int m, int u)
{
    int v, i, j, temp;
    v=a[m];
    i=m;
    j=u+1;
    do
    {
        do
            i++;
        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    a[m]=a[j];
    a[j]=v;
    return(j);
}

void quick_sort(int a[],int m,int u)
{
    int j;
    if(m<u)
    {
        j=pivot(a,m,u);
        quick_sort(a,m,j-1);        //Recursion
        quick_sort(a,j+1,u);
    }
}

int main()
{
    int a[100],n,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter those elements:-"<<endl;

    for(i=0;i<n;i++)
        cin>>a[i];

    quick_sort(a,0,n-1);
    cout<<"Array after sorting: ";

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
