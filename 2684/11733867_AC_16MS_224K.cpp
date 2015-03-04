#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct Poly{
	Poly(){}
	Poly(int a[10],int b[10],int mm){
		m=mm;
		for (int i=1;i<mm;i++)
			l[i-1]=abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);                                                     
		for (int i=2;i<mm;i++)
		{
			if (a[i-1]-a[i-2]>0) {
				if (b[i]-b[i-1]<0) d[i-2]=1;
				else if (b[i]-b[i-1]>0) d[i-2]=2;
				else d[i-2]=0;
			}else if (a[i-1]-a[i-2]<0) {
				if (b[i]-b[i-1]<0) d[i-2]=2;
				else if (b[i]-b[i-1]>0) d[i-2]=1;
				else d[i-2]=0;
			}else if (b[i-1]-b[i-2]>0) {
				if (a[i]-a[i-1]<0) d[i-2]=2;
				else if (a[i]-a[i-1]>0) d[i-2]=1;
				else d[i-2]=0;
			}else if (b[i-1]-b[i-2]<0) {
				if (a[i]-a[i-1]<0) d[i-2]=1;
				else if (a[i]-a[i-1]>0) d[i-2]=2;
				else d[i-2]=0;
			}else
				d[i-2]=3;
		}
	}
	int m;
	int l[10];
	int d[10];
	void change()
	{
		for (int i=0;i<(m-1)/2;i++)
			l[i]^=l[m-1-i-1]^=l[i]^=l[m-1-i-1];
		for (int i=0;i<m-2;i++)
			if (d[i]==1) d[i]=2;
			else if (d[i]==2) d[i]=1;
		for (int i=0;i<(m-2)/2;i++)
			d[i]^=d[m-2-i-1]^=d[i]^=d[m-2-i-1];
	}
	bool operator==(Poly p){
		bool ans=true;
		if (m!=p.m) return false;
		for (int i=0;i<m-1;i++)
			if (p.l[i]!=l[i]) {ans=false;break;}
		if (ans)
		for (int i=0;i<m-2;i++)
			if (p.d[i]!=d[i]) {ans=false;break;}
		if (!ans) p.change();
		else return true;
		for (int i=0;i<m-1;i++)
			if (p.l[i]!=l[i]) return false;
		for (int i=0;i<m-2;i++)
			if (p.d[i]!=d[i]) return false;
		return true;
	}
};

Poly poly[52];
int a[10],b[10];

int main()
{
	int n,m;
	while (cin>>n&&n){
		cin>>m;
		for (int i=0;i<m;i++)
			cin>>a[i]>>b[i];
		poly[0]=Poly(a,b,m);
		for (int i=1;i<=n;i++){
			cin>>m;
			for (int i=0;i<m;i++)
				cin>>a[i]>>b[i];
			poly[i]=Poly(a,b,m);
		}
		for (int i=1;i<=n;i++)
			if (poly[0]==poly[i])
				cout<<i<<endl;
		cout<<"+++++"<<endl;
	}
	return 0;
}