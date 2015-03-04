#include <iostream>
#include <math.h>

using namespace std;
const double pi=3.1415929535;
double x[101],y[101],z[101],u[101],v[101],w[101];

bool f(int a,int b){
	double pa=(0-u[a])*(x[b]-u[a])+(0-v[a])*(y[b]-v[a])+(0-w[a])*(z[b]-w[a]);
	double pb=sqrt((x[b]-u[a])*(x[b]-u[a])+(y[b]-v[a])*(y[b]-v[a])+(z[b]-w[a])*(z[b]-w[a]))*sqrt(u[a]*u[a]+v[a]*v[a]+w[a]*w[a]);
	double aa=acos(pa/pb);
	if (aa<=pi/2) return false;
	return true;
}

int main()
{
	int n,m;
	while (cin>>n>>m){
		if (!n&&!m) break;
		for (int i=0;i<n;i++){
			cin>>x[i]>>y[i]>>z[i];
		}
		for (int i=0;i<m;i++){
			cin>>u[i]>>v[i]>>w[i];
		}
		int ans=0;
		for (int i=0;i<m;i++)
			for (int j=0;j<n;j++)
				if (f(i,j)) {ans++;break;}
		cout<<ans<<endl;
	}
	return 0;
}