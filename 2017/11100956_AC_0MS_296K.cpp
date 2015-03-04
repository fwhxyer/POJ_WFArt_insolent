#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t!=-1)
	{
		int ans=0,c=0,a,b;
		for (int i=0;i<t;i++){
			cin>>a>>b;
			ans+=a*(b-c);
			c=b;
		}
		cout<<ans<<" miles"<<endl;
		cin>>t;
	}
	system("pause");
}