#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	
	return b==0?a:gcd(b,a%b);
}
int lcm(int a,int b,int g)
{
	return a*b/g;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"GCD "<<gcd(a,b)<<endl;
	int g=gcd(a,b);
	cout<<"LCM "<<lcm(a,b,g)<<endl;
	return 0;
}
