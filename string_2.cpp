//QUESTION: How do you check if two strings are anagrams of each other?
//ANAGRAM = Two words made with same letters. Eg- LISTEN-SILENT

//TRICK: 1. Sort both the strings, 2. Compare the sorted strings

#include<iostream>
#include<bits/stdc++.h>     //Complete C++ Library
using namespace std;

bool isAnagram(string str1, string str2)
{
    int n1,n2;
    n1=str1.length();
    n2=str2.length();

    if(n1!=n2)          //If lengths are not same then can't be anagrams
        return false;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i=0;i<n1;i++)
        if(str1[i]!=str2[i])
            return false;
        return true;        //Here we don't need "else" statement
}

int main()
{
    string str1, str2;
    cout<<"Enter the first word: ";
    cin>>str1;
    cout<<"Enter the second word: ";
    cin>>str2;
    if (isAnagram(str1,str2))
        cout<<"The strings are ANAGRAMS of each other";
    else
        cout<<"Strings are NOT anagrams";
    return 0;
}
