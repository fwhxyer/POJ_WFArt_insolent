#include<iostream>
using namespace std;

int e[50001]={0};
int f[50001]={0};

int ans=0;
int find(int x)
{
	if (f[x]==x) return x;
	e[x]=(e[f[x]]+e[x])%3;
	f[x]=find(f[x]);
	return f[x];
}

int main()
{
	int n,k;
	cin>>n>>k;
	for (int i=0;i<=n;i++) f[i]=i;
	for (int i=0;i<k;i++)
	{
		int d,x,y;
		cin>>d>>x>>y;
		if (x>n||y>n ||(d==2&&x==y)){ans++;
		//cout<<"error3:"<<d<<" "<<x<<" "<<y<<"   foolish error!"<<endl;
		continue;}
		if (d==1)
		{
			if (find(x)==find(y)){
				if (e[x]!=e[y]){
					ans++;//cout<<"error1:"<<d<<" "<<e[x]<<" "<<e[y]<<endl;
				} else{
					//cout<<"good1:"<<d<<" "<<e[x]<<" "<<e[y]<<endl;
					continue;
				}
			}else {
				f[find(y)]=find(x);
				e[y]=0;
				//cout<<"good1:"<<d<<" "<<e[x]<<" "<<e[ya]<<endl;
			}
		}else if (d==2){
			if (find(x)==find(y)){
				if ((e[x]==0&&e[y]==2)||
					(e[x]==1&&e[y]==0)||
					(e[x]==2&&e[y]==1)){
					//cout<<"good1:"<<d<<" "<<e[x]<<" "<<e[y]<<endl;
					continue;
				}else{
					ans++;
					//cout<<"error2:"<<d<<" "<<e[x]<<" "<<e[y]<<endl;
				}
			}else{
				f[find(y)]=x;
				e[y]=2;
				//cout<<"good1:"<<d<<" "<<e[x]<<" "<<e[y]<<endl;
			}
		}else{
			cout<<"d==else bad";
		}
	}
	cout<<ans<<endl;
	system("pause");
}