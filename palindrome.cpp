#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int palin(char str[], int l, int r)
{
	if (l >= r)
		return 1;;

	if (str[l] != str[r])
		return 0;

	return palin(str, l + 1, r - 1);

}

int main()
{
char s[100000];
cin>>s;
int x=palin(s,0,strlen(s)-1);
if (x==1)
cout<<"palindrome";
else
cout<<"not palindrome";
}