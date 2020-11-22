//QUESTION: How do you print duplicate characters from a string?

#include<iostream>
#include<string.h>      //Header file for Strings
using namespace std;

int main()
{
    char string[100];
    cout<<"Enter strings: ";
    cin.getline(string,100);

    cout<<"Following are the duplicate characters: "<<endl;
    for(int i=0;i<strlen(string);i++)
    {
        for(int j=i+1;j<strlen(string);j++)         // nested loop statement
        {
            if(string[i]==string[j])                // logic to detect duplicate character
            {
                cout<<string[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
