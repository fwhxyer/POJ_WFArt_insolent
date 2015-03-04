#include<iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int f,r;
	int a[11],b[11];
	double c[110];
	while (cin>>f&&f)
	{
		cin>>r;
		for (int i=0;i<f;i++) cin>>a[i];
		for (int i=0;i<r;i++) cin>>b[i];
		int k=0;
		for (int i=0;i<f;i++)
			for (int j=0;j<r;j++)
				c[k++]=(double)b[j]/a[i];
		sort(c,c+k);
		double ans=0;
		for (int i=0;i<k-1;i++)
			if (c[i+1]/c[i]>ans) ans=c[i+1]/c[i];
		printf("%0.2lf\n",ans);
	}
	return 0;
}