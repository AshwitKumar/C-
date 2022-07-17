#include <iostream>
using namespace std;
bool pal(string s, int fstin, int lstin)
{
	if(fstin==lstin || fstin>lstin)
		return true;
	if(s.at(fstin) != s.at(lstin))
		return false;
	return pal(s, fstin+1, lstin-1);
}
int main(){
	cout << "Enter a string\n";
	string str = "";
	cin >> str;
	int len=str.length();
	cout << "length of string is: " << len<<"\n";
	bool flag = pal(str, 0, len-1);
	if(flag==true)
		cout << "Palindrome";
	else
		cout << "Nopes";

	return 0;
}
