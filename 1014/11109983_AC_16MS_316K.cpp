#include<iostream>
#include<string>
using namespace std;

int th[202]={0};
bool f[120001];

int main () 
{
	int a,atmp,t=0,n,m;
	string ans="";
	do{
		atmp=0;n=0,m=0;	
		fill(th,th+200,0);
		for (int i=1;i<=6;i++)
		{
			cin>>a;
			if (a==0) {atmp++;continue;}
			m+=i*a;

			int tmp=1;
			while (a>tmp){
				th[n++]=tmp*i;
				a-=tmp;
				tmp*=2;
			}
			if (a)
				th[n++]=a*i;
		}
		if (atmp>=6) return 0;
		if (m%2){
			ans="Can't be divided.";
		}else if (m>0)
		{
			m/=2;
			fill(f,f+200,0);
			f[0]=1;
			for (int i=0;i<n;i++)
				for (int j=m;j>0;j--)
					if ((j>=th[i])&&(f[j-th[i]]))
						f[j]=1;
			if (f[m]) ans="Can be divided.";
			else ans="Can't be divided.";
		}else
		{
			ans="Can't be divided.";
		}
		cout<<"Collection #"<<++t<<":"<<endl<<ans<<endl<<endl;
	}while (atmp<6);
	system("pause");
}
