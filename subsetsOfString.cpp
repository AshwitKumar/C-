#include <iostream>
#include <bits/std++.h>
using namespace std;
void sub(string s, string p, int l)
{
	if(l==0)
		cout <<p<<" ";
	cout <<sub(s.substr(l), p.append(s[l]), l--);
}
int main()
{
	int len;
	string s;
	cout<<"Enter a string\n";
	cin>>s;
	len = s.length();
	cout<<"str = " << s <<" Length= " << len;
	sub(s,"",len);
	return 0;
}
