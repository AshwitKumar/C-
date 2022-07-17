#include <iostream>
using namespace std;
int rope(int n, int a, int b, int c){
	if(n<0)
		return -1;
	if(n==0)
		return 0;
	int result;
	if(rope(n-a,a,b,c)>=rope(n-b,a,b,c) && rope(n-a,a,b,c)>=rope(n-c,a,b,c))
		result = rope(n-a,a,b,c);
	if(rope(n-b,a,b,c)>=rope(n-a,a,b,c) && rope(n-b,a,b,c)>=rope(n-c,a,b,c))
		result = rope(n-b,a,b,c);	
	if(rope(n-c,a,b,c)>=rope(n-b,a,b,c) && rope(n-c,a,b,c)>=rope(n-a,a,b,c))
		result = rope(n-c,a,b,c);
	if(result==-1)
		return -1;
	return result+1;
}
int main(){
	int n,a,b,c;
	cout <<"Enter n,a,b,c\n";
	cin >>n>>a>>b>>c;
	cout <<"maximum number of peices of the rope is: "<<rope(n,a,b,c);
	cout <<"This is an edit";
	return 0;
}
