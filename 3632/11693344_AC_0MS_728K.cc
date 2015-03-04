#include <iostream>

using namespace std;

int main()
{
	int T,n,minn=10000,maxn=0;
	cin>>T;
	while (T--)
	{
		minn=10000,maxn=0;
		cin>>n;
		int tmp;
		for (int i=0;i<n;i++)
		{
			cin>>tmp;
			if (tmp<minn) minn=tmp;
			if (tmp>maxn) maxn=tmp;
		}
		cout<<2*(maxn-minn)<<endl;
	}
}
