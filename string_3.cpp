/*QUESTION: How do you print the first non-repeated character from a string?

TRICK: 1. Scan the input string and construct a character count array from input string.
       2. Now we scan the count array only.
       3. In count array, we store counts as well as index of the first time we encountered the character.*/

#include<bits/stdc++.h>
#define NCHAR 256
using namespace std;

struct cpos
{
    int count;
    int position;
};

void fnrc(char *s)     //First Non Repeating char
{
    int res = INT_MAX;
    cpos* count = new cpos[NCHAR];
    for(int i=0;i<strlen(s);i++)
    {
        (count[s[i]].count)++;  //Increment the count of each character

        if(count[s[i]].count == 1)  //Storing the position of 1st occurrence
        {
            count[s[i]].position = i;
        }
    }

    for(int i=0; i<NCHAR; i++)
    {
        if(count[i].count == 1 && res > count[i].position)    //
        {
            res = count[i].position;
        }
    }
    cout<<"First non-repeating character is: "<<s[res]<<endl;
}

int main()
{
    char s[NCHAR];
    cout<<"Enter the string:- "<<endl;
    gets(s);
    fnrc(s);
}
