#include<iostream>
#include<string>
#include<math.h>
using namespace std;

short a[201],b[201],c[201],f[201][2501][21],vp[201][2501][21],vd[201][2501][21];
bool step[201][2501][21];
const int ci=2200;

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}

void getStep(int a,int b,int t)
{
	if (a>=0)
	if (step[a][b][t]){
		getStep(a-1,b-c[a],t-1);
		cout<<" "<<a;
	}else{
		getStep(a-1,b,t);
	}
}

int main()
{
	int n,m,num=1;
	cin>>n>>m;
	while (n!=0&&m!=0)
	{
		memset(f,-25,sizeof(f));
		//cout<<f[0][0][0]<<endl;
		f[0][ci][0]=0;
		for (int i=1;i<=n;i++){
			cin>>a[i]>>b[i];
			c[i]=a[i]-b[i];
			f[i][ci][0]=0;
		}
		int sum=0;
		memset(step,0,sizeof(step));
		memset(vp,0,sizeof(vp));
		memset(vd,0,sizeof(vd));
		for (int i=1;i<=n;i++){
			if (sum<2000) sum+=abs(c[i]);
			if (sum>2000) sum=2000;
			for (int j=-sum+ci;j<=sum+ci;j++)
				for (int k=1;k<=min(m,i);k++){
					/*cout<<"   !A表=========="<<i-1<<"\t"<<j-ci<<"\t"<<k-1<<endl;
					for (int j=-sum+ci;j<=sum+ci;j++){
						for (int k=1;k<=min(m,i);k++){
							cout<<j-ci<<'\t'<<f[i-1][j][k-1]<<"\t";
						}
						cout<<endl;
					}
					//system("pause");*/
					if (f[i-1][j-c[i]][k-1]+a[i]+b[i]>f[i-1][j][k]){
						f[i][j][k]=f[i-1][j-c[i]][k-1]+a[i]+b[i];
						step[i][j][k]=true;
						vp[i][j][k]=vp[i-1][j-c[i]][k-1]+a[i];
						vd[i][j][k]=vd[i-1][j-c[i]][k-1]+b[i];
					}else{
						f[i][j][k]=f[i-1][j][k];
						step[i][j][k]=false;
						vp[i][j][k]=vp[i-1][j][k];
						vd[i][j][k]=vd[i-1][j][k];
					}
					/*cout<<"   !B表=========="<<i<<"\t"<<j-ci<<"\t"<<k<<endl;
					for (int j=-sum+ci;j<=sum+ci;j++){
						for (int k=1;k<=min(m,i);k++){
							cout<<j-ci<<'\t'<<f[i][j][k]<<"\t";
						}
						cout<<endl;
					}
					//system("pause");*/
				}
		}
		int minus=0;
		for (minus=0;minus<=sum;minus++)
			if (f[n][minus+ci][m]>=0||f[n][-minus+ci][m]>=0) break;
		if (f[n][-minus+ci][m]>=0) {
			cout<<"Jury #"<<num++<<endl<<"Best jury has value "<<vp[n][-minus+ci][m]<<" for prosecution and value "<<vd[n][-minus+ci][m]<<" for defence:\n";
			getStep(n,-minus+ci,m);
			cout<<endl<<endl;
		}else{
			cout<<"Jury #"<<num++<<endl<<"Best jury has value "<<vp[n][minus+ci][m]<<" for prosecution and value "<<vd[n][minus+ci][m]<<" for defence:\n";
			getStep(n,minus+ci,m);
			cout<<endl<<endl;
		}
		cin>>n>>m;
	}
}