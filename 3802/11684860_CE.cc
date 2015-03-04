#include<iostream>

using namespace std;

int aa[10],bb[10];
int cc[21];

int main()
{
	int a,b,ans;
	while (cin>>a>>b&&(!(a==0&&b==0)))
	{
		ans=0;
		for (int i=0;i<a;i++)
			cin>>aa[i];
		for (int i=0;i<b;i++)
			cin>>bb[i];
		memset(cc,0,sizeof(cc));
		for (int i=0;i<a;i++)
		{
			cc[aa[i]]++;
			ans+=aa[i];
		}
		for (int i=0;i<b;i++){
			if (cc[bb[i]]) cc[bb[i]]--;
			else
				ans+=bb[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}