#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int ans;
		do{
			ans=0;
			while (n>9){
				ans+=n%10;
				n/=10;
			}
			ans+=n;
			n=ans;
		}while (ans>9);
		cout<<ans<<endl;
	}
}