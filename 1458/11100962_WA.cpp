#include<iostream>
#include<string>
using namespace std;

int c[10000],d[10000];
bool tmp[10000];

int gofind(string s,char f)
{
	for (int i=0;i<s.length();i++)
		if (tmp[i]&&s[i]==f){tmp[i]=false; return i;}
	return -1;
}

int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		int ans=0;
		fill(tmp,tmp+a.length(),1);
		fill(d,d+b.length(),1);
		for (int i=0;i<b.length();i++)
			c[i]=gofind(a,b[i]);
		/*for (int i=0;i<b.length();i++)
			cout<<c[i]<<" ";cout<<endl;*/
		for (int i=1;i<b.length();i++)
			for (int j=0;j<i;j++)
				if (c[i]!=-1&&c[j]!=-1&&c[j]<c[i]&&d[j]+1>d[i]) {
					d[i]=d[j]+1;
					if ((d[i])>ans) ans=d[i];
				}
		/*for (int i=0;i<b.length();i++)
			cout<<d[i]<<" ";cout<<endl;*/
		cout<<ans<<endl;
	}
	system("pasue");
}