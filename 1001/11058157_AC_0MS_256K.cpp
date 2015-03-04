#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string minus(string a,int b)
{
	int tmp,tmp1=0;
	for (int i=0;i<a.length();i++)
	{
		tmp=b*(a[i]-'0')+tmp1;
		tmp1=tmp/10;
		tmp%=10;
		a[i]=char(tmp+'0');
	}
	while (tmp1)
	{
		a+=char(tmp1%10+'0');
		tmp1/=10;
	}
	return a;
}

int main()
{
	string s;
	string a;
	int n;
	while(cin>>s>>n)
	{
		int i,ns;
		for (i=0;i<6;i++)
			if (s[i]=='.') break;
		int m=5-i;
		for (int j=i;j<5;j++)
			s[j]=s[j+1];
		s=s.substr(0,5);
		stringstream ss;
		ss<<s;
		ss>>ns;
		m=m*n;
		a="1";
		//cout<<ns;
		for (int i=0;i<n;i++)
		{
			//cout<<a<<endl;
			a=minus(a,ns);
		}
		//cout<<a<<endl;
		for (int i=0;i<a.length()/2;i++) 
		{	char tmp=a[i];
			a[i]=a[a.length()-1-i];
			a[a.length()-1-i]=tmp;
		}
		//cout<<a<<endl;
		s="";
		if (a.length()<m)
			for (int i=a.length();i<m;i++)
				s+='0';
		a=s+a;
		s=a.substr(0,a.length()-m)+'.'+a.substr(a.length()-m,m);
		//cout<<s<<endl;
		int tmp=s.length()-1;
		while (s[tmp]=='0') tmp--;
		if (s[tmp]=='.') tmp--;
		s=s.substr(0,tmp+1);
		cout<<s<<endl;
	}
}