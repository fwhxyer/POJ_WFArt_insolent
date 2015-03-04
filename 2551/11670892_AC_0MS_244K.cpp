#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int tmp=1,ans=1;
		while (tmp%n){
			tmp%=n;
			tmp=10*tmp+1;
			ans++;
		}
		cout<<ans<<endl;
	}
}