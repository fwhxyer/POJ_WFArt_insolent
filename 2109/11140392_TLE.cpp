#include<iostream>
#include<string>
using namespace std;

string multi(string s,int n)
{
	int t=0;
	for (int i=0;i<s.length();i++){
		int tmp=(s[i]-'0')*n+t;
		t=tmp/10;
		tmp%=10;
		s[i]=char(tmp+'0');
	}
	while (t>0)
	{
		s+=char(t%10+'0');
		t/=10;
	}
	return s;
}

int main()
{
	int ans[10]={1,1,10,100,1000,10000,100000,1000000,10000000,100000000};
	int n;
	char tmp;
	string q;
	while(cin>>n>>q)
	{
		int le=q.length();
		for (int i=0;i<le/2;i++){tmp=q[i];q[i]=q[le-i-1];q[le-i-1]=tmp;}
		le/=n;
		string tmps="1";
		int i;
		for (i=ans[le];;i++)
		{
			tmps="1";
			for (int j=0;j<n;j++)
				tmps=multi(tmps,i);
			if (tmps==q) break;
		}
		cout<<i<<endl;
	}
	system("pause");
}