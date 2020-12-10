/*QUESTION: How are duplicate characters found in a string?*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    int i, j, len;
    cout<<"Enter string:"<<endl;
    getline(cin,str1);
    len = str1.length();
    cout<<"Following are duplicate characters:"<<endl;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str1[i]==str1[j])
            {
               cout<<str1[i]<<endl;
               break;
            }
        }
    }
    return 0;
}
