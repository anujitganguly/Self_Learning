//QUESTION: How is a bubble sort algorithm implemented?

#include<iostream>
#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
	int a[MAX],n,i,j,temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array elements:- "<<endl;
	for(i=0;i<n;++i)
		cin>>a[i];

	for(i=1;i<n;i++)        //Bubble Sort logic implementation begins
	{
		for(j=0;j<(n-i);j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}

	cout<<"Array after bubble sort:"<<endl;
	for(i=0;i<n;i++)
		cout<<" "<<a[i];
	return 0;
}
