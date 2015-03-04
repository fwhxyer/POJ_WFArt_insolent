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
		int i=0,sum=0,t=0;
		while (++t){
			sum+=a[i++];
			int tmp=sum;
			while (tmp>0){
				tmp-=a[i++];
				if (i>=n) break;
				if (tmp==0)
					tmp=sum;
			}
			if (i==n) break;
			else 
				i=t;
		}
		cout<<TT<<" "<<sum<<endl;
	}
	return 0;
}