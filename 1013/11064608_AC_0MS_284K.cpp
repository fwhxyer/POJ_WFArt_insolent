#include<iostream>
#include<string>
using namespace std;

int we[12]={0};

int main()
{
	int n;
	cin>>n;
	for (int itmp=0;itmp<n;itmp++)
	{
		string a,b,c,a1,b1,c1,a2,b2,c2,a3,b3,c3;
		cin>>a1>>b1>>c1;
		cin>>a2>>b2>>c2;
		cin>>a3>>b3>>c3;
		for (int i=0;i<24;i++){
			if (i<12) we[i]=-1;
			else we[i-12]=1;
			int x=0,y=0;
			a=a1;b=b1;c=c1;
			for (int j=0;j<a.length();j++) x+=we[int(a[j]-'A')];
			for (int j=0;j<b.length();j++) y+=we[int(b[j]-'A')];
			if (!((x==y&&c=="even")||(x>y&&c=="up")||(x<y&&c=="down")))
				{we[i%12]=0;continue;}
			x=0,y=0;
			a=a2;b=b2;c=c2;
			for (int j=0;j<a.length();j++) x+=we[int(a[j]-'A')];
			for (int j=0;j<a.length();j++) y+=we[int(b[j]-'A')];
			if (!((x==y&&c=="even")||(x>y&&c=="up")||(x<y&&c=="down")))
				{we[i%12]=0;continue;}
			x=0,y=0;
			a=a3;b=b3;c=c3;
			for (int j=0;j<a.length();j++) x+=we[int(a[j]-'A')];
			for (int j=0;j<a.length();j++) y+=we[int(b[j]-'A')];
			if (!((x==y&&c=="even")||(x>y&&c=="up")||(x<y&&c=="down")))
				{we[i%12]=0;continue;}
			if (i<12) cout<<char(i+int('A'))<<" is the counterfeit coin and it is light.\n";
			else cout<<char(i+int('A')-12)<<" is the counterfeit coin and it is heavy.\n";
			we[i%12]=0;
			break;
		}
	}
	system("pause");
}
