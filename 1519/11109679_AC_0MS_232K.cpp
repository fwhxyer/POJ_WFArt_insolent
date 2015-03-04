#include<iostream>
#include<string>
using namespace std;

int main()
{
	string nn;
	while(cin>>nn&&nn!="0")
	{
		int n=0;
		for (int i=0;i<nn.length();i++)
			n+=nn[i]-'0';
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