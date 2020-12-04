/*QUESTION: How can a given string be reversed using recursion?
TRICK: It uses some library functions only*/

#include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int l, int h)
{
    if (l < h)
    {
        swap(str[l], str[h]);
        reverse(str, l + 1, h - 1);
    }
}

int main()      //Reversing main string using recursion
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    reverse(str, 0, str.length() - 1);
    cout << "Reverse of the given string is : " << str;

    return 0;
}
