#include<iostream>
#include<string>
using namespace std;

int th[20001]={0};
bool f[20001];

int main () 
{
	int a,atmp,t=0,n,m;
	string ans;
	do{
		atmp=0;n=0,m=0;
		for (int i=1;i<=6;i++)
		{
			cin>>a;
			if (a==0) atmp++;
			int j;
			m+=i*a;
			for (j=0;j<a;j++)
			{
				th[j+n]=i;
			}
			n+=j;
		}
		if (m%2){
			ans="Can't be divided.";
		}else if (m>0)
		{
			m/=2;
			fill(f,f+m+1,0);
			f[0]=1;
			for (int i=0;i<n;i++)
				for (int j=m;j>=0;j--)
					if ((j>=th[i])&&(f[j-th[i]]))
					{
						f[j]=1; 
						break;
					}
			if (f[m]) ans="Can be divided.";
			else ans="Can't be divided.";
		}
		if (atmp!=6) cout<<"Collection #"<<++t<<":\n"<<ans<<endl<<endl;
	}while (atmp<6);
	system("pause");
}