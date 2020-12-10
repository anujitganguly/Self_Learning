//QUESTION: How do you check if a string contains only digit?

#include <bits/stdc++.h>
using namespace std;

// Returns true if s is a number else false
bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == false)
			return false;

	return true;
}
int main()
{
	string str;
	cout<<"Enter string:";
	getline(cin,str);
	if (isNumber(str))
		cout << "Integer";
	else
		cout << "String";
}
