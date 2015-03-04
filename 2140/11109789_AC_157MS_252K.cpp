#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	for (int a=1;a<=n;a+=2)
	{
		if (n%a==0) ans++; 
	}
	cout<<ans<<endl;
}