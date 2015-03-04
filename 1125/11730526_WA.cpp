#include <iostream>
#include <vector>

using namespace std;

int d[101][101];
int e[101][101];
int f[101];

int main()
{
	int n;
	while (cin>>n&&n){
		memset(e,0,sizeof(e));
		memset(f,0,sizeof(f));
		int tmp,a,b;
		for (int i=1;i<=n;i++){
			cin>>tmp;
			for (int j=0;j<tmp;j++)
			{
				cin>>a>>b;
				e[i][a]=b;
			}
		}
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				if (e[i][j])
					d[i][j]=e[i][j];
				else
					d[i][j]=2000;
		for (int k=1;k<=n;k++)
			for (int i=1;i<=n;i++)
				for (int j=1;j<=n;j++)
				if (i!=j&&i!=k&&j!=k)
				{
					if (e[k][j]&&d[i][j]>d[i][k]+e[k][j])
						d[i][j]=d[i][k]+e[k][j];
				}
		for (int i=1;i<=n;i++){
			int maxt=0;
			for (int j=1;j<=n;j++)
				if (i!=j)
					if (maxt<d[i][j]) maxt=d[i][j];
			f[i]=maxt;
		}
		int mint=2000;int ans=1;
		for (int i=1;i<=n;i++){
			if (mint>f[i]) {mint=f[i];ans=i;}
		}
		if (mint==2000)
			cout<<"disjoint"<<endl;
		else 
			cout<<ans<<" "<<mint<<endl;
	}
	return 0;
}