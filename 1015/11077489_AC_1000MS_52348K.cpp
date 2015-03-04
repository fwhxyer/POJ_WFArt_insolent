#include<iostream>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

short a[201],b[201],c[201],f[201][4201][21];
bool step[201][4201][21];
const int ci=2100;
int vp=0,vd=0;

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}
string ans;

void getStep(int w,int f,int t)
{
	if (w>=0)
	if (step[w][f][t]){
		getStep(w-1,f-c[w],t-1);
		vp+=a[w];
		vd+=b[w];
	}else{
		getStep(w-1,f,t);
	}
}
void getStepS(int w,int f,int t)
{
	if (w>=0)
	if (step[w][f][t]){
		getStepS(w-1,f-c[w],t-1);
		cout<<" "<<w;
	}else{
		getStepS(w-1,f,t);
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
		vp=vd=0;
		ans="";
		for (int i=1;i<=n;i++){
			if (sum<500) sum+=abs(c[i]);
			if (sum>500) sum=500;
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
						/*
						vp[i][j][k]=vp[i-1][j-c[i]][k-1]+a[i];
						vd[i][j][k]=vd[i-1][j-c[i]][k-1]+b[i];
						*/
					}else{
						f[i][j][k]=f[i-1][j][k];
						step[i][j][k]=false;
						/*
						vp[i][j][k]=vp[i-1][j][k];
						vd[i][j][k]=vd[i-1][j][k];
						*/
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
		/*
		if (f[n][-minus+ci][m]>f[n][minus+ci][m]) {
			cout<<"Jury #"<<num++<<endl<<"Best jury has value "<<vp[n][-minus+ci][m]<<" for prosecution and value "<<vd[n][-minus+ci][m]<<" for defence:\n";
			getStep(n,-minus+ci,m);
			cout<<endl<<endl;
		}else{
			cout<<"Jury #"<<num++<<endl<<"Best jury has value "<<vp[n][minus+ci][m]<<" for prosecution and value "<<vd[n][minus+ci][m]<<" for defence:\n";
			getStep(n,minus+ci,m);
			cout<<endl<<endl;
		}*/
		if (f[n][-minus+ci][m]>f[n][minus+ci][m])
			getStep(n,-minus+ci,m);
		else
			getStep(n,minus+ci,m);

		cout<<"Jury #"<<num++<<endl<<"Best jury has value "<<vp<<" for prosecution and value "<<vd<<" for defence:\n";

		if (f[n][-minus+ci][m]>f[n][minus+ci][m])
			getStepS(n,-minus+ci,m);
		else
			getStepS(n,minus+ci,m);

		cout<<endl<<endl;

		cin>>n>>m;
	}
}