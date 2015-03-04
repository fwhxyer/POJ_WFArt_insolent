#include <iostream>
#include <string.h>

using namespace std;

int ans[16]={0};

bool found[65539];

int main()
{
	long long a,b,c,d;
	while (cin>>a&&a!=0)
	{
		memset(found,0,sizeof(found));
		memset(ans,0,sizeof(ans));
		cin>>b>>c>>d;
		int tmp=d,tmpn=16;
		while (tmp)
		{
			ans[--tmpn]=tmp%2;
			tmp/=2;
		}
		while (!found[d=((a*d+b)%c)])
		{
			found[d]=1;
			tmp=d;
			tmpn=16;
			while (tmp)
			{
				--tmpn;
				if (ans[tmpn]!=3&&ans[tmpn]!=tmp%2)
					ans[tmpn]=3;
				tmp/=2;
			}
		}
		for (int i=0;i<16;i++)
			if (ans[i]==3) cout<<"?";
			else
				cout<<ans[i];
		cout<<endl;
	}
	return 0;
}