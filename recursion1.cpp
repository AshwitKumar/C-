#include <iostream>
using namespace std;
void rec1(int n);
int main(){
	int x;
	cout <<"Enter a number:\n";
	cin >> x;
	rec1(x);
	return 0;
}
void rec1(int n)
{
	if(n>0){
		cout << n <<" ";
		rec1(n-1);
	}
}
