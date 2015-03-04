#include <iostream>
using namespace std;

int a[10005];

int main()
{
	int T,TT,n;
	cin>>T;
	while (T--)
	{
		cin>>TT>>n;
		for (int j=0;j<n;j++)
			cin>>a[j];
		int sum=0,i=0,j=0;
		while (i<n)
		{
			j++;
			sum+=a[i++];
			if (i>=n) break;
			int tmp=sum;
			while (tmp>0)
			{
				tmp-=a[i++];
				if (i>=n) break;
				if (tmp==0) tmp=sum;
			}
			if (tmp!=0) i=j;
		}
		cout<<TT<<" "<<sum<<endl;
	}
	return 0;
}