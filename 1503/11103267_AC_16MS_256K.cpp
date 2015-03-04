#include<iostream>
#include<string>
using namespace std;

string plus(string a,string b)
{
	string c;
	int n,aaa;
	if (a.length()>b.length()){ 
		n=a.length();
		c=a;
		aaa=a.length()-b.length();
		for (int i=0;i<aaa;i++)
			b+='0';
	}else {
		n=b.length();
		c=b;
		aaa=b.length()-a.length();
		for (int i=0;i<aaa;i++)
			a+='0';
	}
	char tmp='0';
	for (int i=0;i<n;i++){
		c[i]=a[i]+b[i]+tmp-'0'-'0';
		if (c[i]>'9') {
			c[i]-=10;
			tmp='1';
		}else
			tmp='0';
	}
	if (tmp=='1')
		c+=tmp;
	return c;
}

int main()
{
	string s,ans="0";
	cin>>s;
	while (s!="0"){
		char tmp;
		for (int i=0;i<s.length()/2;i++){
			tmp=s[i];
			s[i]=s[s.length()-i-1];
			s[s.length()-i-1]=tmp;
		}
		ans=plus(ans,s);
		cin>>s;
	}
	char tmp;
	for (int i=0;i<ans.length()/2;i++){
		tmp=ans[i];
		ans[i]=ans[ans.length()-i-1];
		ans[ans.length()-i-1]=tmp;
	}
	cout<<ans<<endl;
	system("pause");
}