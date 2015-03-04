#include <iostream>
#include <string>
using namespace std;

int a[30001],c[30001];

int main()
{
	string a,b;
	int T;
	cin>>T;
	while (T--){
		cin>>a>>b;
		int j=0;
		for (int i=0;i<a.length();i++)
			if (j<b.length()&&a[i]==b[j]) j++;
		if (j>=b.length()) {cout<<"YES\n"; continue;}
		for (int i=0;i<b.length()/2;i++) {char tmp=b[i];b[i]=b[b.length()-i-1];b[b.length()-i-1]=tmp;}
		j=0;
		for (int i=0;i<a.length();i++)
			if (j<b.length()&&a[i]==b[j]) j++;
		if (j>=b.length()) cout<<"YES\n";
		else cout<<"NO\n";
	}
}