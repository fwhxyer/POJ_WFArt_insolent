#include<iostream>
#include<math.h>
using namespace std;

int hh[322][322]={{0},{2,3},{2,3,3},{2,3,2,3},{2,3,3,3,3},{2,3,2,2,2,3},{2,3,3,2,2,3,3},{2,3,2,3,2,3,2,3},{2,3,3,3,3,3,3,3,3},
	{2,3,2,2,2,2,2,2,2,3},{2,3,3,2,2,2,2,2,2,3,3},{2,3,2,3,2,2,2,2,2,3,2,3}};

bool h(int n,int k)
{
	if ((n-1)/2<(k-1)) k=n-k+1;
	if (n<=1||k<=1) return 1;
	if (n<322&&k<322&&hh[n][k]!=0) return hh[n][k]-2;
	double ans=log((double)n)/log(2.0);
	int tmp=floor(ans+0.5);
	tmp=pow(2.0,tmp);
	if (tmp==n) return 1;
	if (tmp>n){
		if (n-tmp/2<k&&k<=tmp/2) return 0;
		if (1<k&&k<=n-tmp/2) return h(n-tmp/2,k);

	}
	if (tmp<n){
		if (n-tmp<k&&k<=tmp) return 0;
		if (k<=n-tmp) return h(n-tmp,k);
	}
	cout<<"???\n";
	return 0;
}

int main()
{
	int m,n;
	while (cin>>m>>n){
		if (m/2<n) n=m-n;
		cout<<h(m+1,n+1)<<endl;
	}

}