/*QUESTION: How do you count the occurrence of a given character in a string?*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    char m;
    int i, k=0, len;
    cout<<"Enter string:"<<endl;
    getline(cin,str1);
    len = str1.length();
    cout<<"Enter element you want to count:"<<endl;
    cin>>m;
    for(i=0;i<len;i++)
    {
        if(str1[i]==m)
        {
            k++;
        }
    }
    cout<<"Number of times "<<m<<" occurred is "<<k<<endl;
    return 0;
}
