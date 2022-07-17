#include <iostream>
using namespace std;
int sumOfDig(int n){
	//if(n<10)  --> retuurn n;  [This is a better code algo]
	if(n<=0)
		return 0;
	return n%10+sumOfDig(n/10);
}
int main(){
	int num;
	cout <<"Enter a number\n";
	cin >>num;
	cout <<"Sum of digits of the number is: "<<sumOfDig(num);
}
