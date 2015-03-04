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

bool check(string ss,string s)
{
	if (ss==s) return true;
	if (ss.length()!=s.length()) return false;
	int t=0;
	while (t<ss.length()+1){
		int i;
		for (i=1;i<ss.length();i++)
			if (ss[i]==s[0]) {
				break;
			}
		if (i==ss.length()) return false;
		else
		{
			string tmp=ss.substr(i,ss.length()-i)+ss.substr(0,i);
			if (tmp==s)
				return true;
			else ss=tmp;
		}
		t++;
	}
	return false;
}

string change(string s){
	char tmp;
	for (int i=0;i<s.length()/2;i++){
		tmp=s[i];
		s[i]=s[s.length()-i-1];
		s[s.length()-i-1]=tmp;
	}
	return s;
}

int main()
{
	string s,ans="0";
	while (cin>>s){
		s=change(s);
		ans=plus(ans,s);
		bool flag=true;
		for (int i=1;i<=s.length();i++){
			if (!check(ans,s)){
				cout<<change(s)<<" is not cyclic\n";
				flag=false;
				break;
			}
			ans=plus(ans,s);
			//cout<<"test:"<<change(ans)<<endl;
		}
		if (flag) cout<<change(s)<<" is cyclic\n";
		ans="0";
	}
	system("pause");
}