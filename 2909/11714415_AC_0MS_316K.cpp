#include <iostream>
#include <string>
#include <math.h>

using namespace std;
bool pri[70000]={0};
int prim[70000];
int n,m=0;

int main()
{
	pri[0]=pri[1]=1;
	for (int i=2;i<=sqrt(69999.0);i++){
		if (!pri[i]){
			for (int j=2;j<=69999/i;j++){
				pri[i*j]=1;
			}
		}
	}
	for (int i=2;i<70000;i++)
		if (!pri[i]) prim[m++]=i;
	while (cin>>n&&n){
		int ans=0;
		for (int i=0;prim[i]<=n/2;i++)
		{
			if (!pri[n-prim[i]])
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}


