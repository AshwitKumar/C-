#include <iostream>
using namespace std;
void rec2(int n)
{
	if(n<1)
		return;
	rec2(n-1);
	cout << n <<" ";
}
int main(){
	int x;
	cout <<"Enter a number\n";
	cin >> x;
	rec2(x);
	return 0;
}
