#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,b,c,ans;
	string t;
	while (cin>>a>>b&&!(a==0&&b==0))
	{
		ans=0;
		while (a--){
			cin>>t>>c;
			ans+=c;
		}
		cout<<b*3-ans<<endl;
	}
	return 0;
}