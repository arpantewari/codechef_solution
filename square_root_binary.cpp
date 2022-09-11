#include<iostream>
using namespace std;
float find_square_root(int n)
{
	int s=0;
	int ans=n;
	int e=n;
	while(s<=e)
	{
		int mid=(s+e)>>1;
		cout<<"mid"<<mid<<"start"<<s<<"end"<<e<<endl;
		if(mid*mid==n)
		{
			return n;
		}
		if(mid*mid<n)
		{
			cout<<"mid"<<mid<<endl;
			s=mid+1;
			ans=mid;
			
		}
		else
		{
			e=mid-1;
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<find_square_root(n)<<endl;
	return 0;
}
