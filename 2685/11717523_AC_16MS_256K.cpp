#include <string>
#include <iostream>

using namespace std;

char way[4]={'i','x','c','m'};
void fix(string &s){
	for (int i=0;i<s.length();i+=2){
		if (s[i]>'9'||s[i]<'0') {
			s=s.substr(0,i)+'1'+s.substr(i,s.length()-i);
		}
	}
}
int getn(string s){
	int ans=0;
	for (int i=0;i<s.length();i+=2)
	{
		int t=s[i]-'0';
		int tt;
		switch (s[i+1])
		{
		case'm':
			tt=1000;
			break;
		case'c':
			tt=100;
			break;
		case'x':
			tt=10;
			break;
		case'i':
			tt=1;
			break;
		default:
			tt=0;
			break;
		}
		ans+=tt*t;
	}
	return ans;
}
int main()
{
	int T;
	string s1,s2;
	cin>>T;
	while (T--){
		cin>>s1>>s2;
		fix(s1);fix(s2);
		int a=getn(s1); int b=getn(s2);
		a=a+b;
		if (a/1000){
			if (a/1000==1) cout<<'m';
			else cout<<a/1000<<'m';
		}
		if (a/100%10){
			if (a/100%10==1) cout<<'c';
			else cout<<a/100%10<<'c';
		}
		if (a/10%10){
			if (a/10%10==1) cout<<'x';
			else cout<<a/10%10<<'x';
		}
		if (a%10){
			if (a%10==1) cout<<'i';
			else cout<<a%10<<'i';
		}
		cout<<endl;
	}
}