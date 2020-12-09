/*QUESTION: How do you find the number of vowels and consonants in a given string?*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i, len, v=0, c=0;
    cout<<"Enter a string: ";
    getline(cin,s);     //Normal "cin>>" doesn't work if there is space in between the sentence
    len = s.length();   //To find length of the string
    for(i=0; i<len; i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    cout<<"Number of Vowels = "<<v<<endl;
    cout<<"Number of Consonants = "<<c<<endl;
    return 0;
}
