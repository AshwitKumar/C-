#include <iostream>
using namespace std;
int jos(int n, int k)
{
	if(n==1)
		return 1;

	return (jos(n-1,k)+k-1)%n+1;
}

int main(){
	int k, n;
	cout <<"In 'Josephus Problem', there are 'n' people sitting in a circle, and starting from 1, every 'k^th' person is killed. You have to find the survivor\n";
	cout <<"Enter the value of 'n' and 'k'\n";
	cin >>n;
	cin >>k;
	cout <<"n="<<n<<" k="<<k;
	cout <<"\nJosephus Problem returns:\t"<<jos(n,k);
	return 0;
}
