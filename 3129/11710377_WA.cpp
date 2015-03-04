#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

double x[500],y[500],z[500],xx[50],yy[50],zz[50],ww[50];

int main()
{
	int n,m;
	while (scanf("%d",&n)==1&&n){
		for (int i=0;i<n;i++)
			scanf("%lf%lf%lf",&x[i],&y[i],&z[i]);
		scanf("%d",&m);
		for (int i=0;i<m;i++)
			scanf("%lf%lf%lf%lf",&xx[i],&yy[i],&zz[i],&ww);
		int ans=0;
		for(int i=0;i<n;i++)
			for (int j=0;j<m;j++)
				if (
					 ww[j]-
					 acos((x[i]*xx[j]+y[i]*yy[j]+z[i]*zz[j])/
					sqrt(x[i]*x[i]+y[i]*y[i]+z[i]*z[i])/sqrt(xx[j]*xx[j]+yy[j]*yy[j]+zz[j]*zz[j]))
					  >-0.00000001
				)
				{ans++;break;}
		printf("%d\n",ans);
	}
	return 0;
}