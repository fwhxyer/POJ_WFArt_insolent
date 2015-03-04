#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string s[1001];
int c[26],d[26];
int main()
{
	int n;
	string ss;
	while (cin>>n&&n){
		for (int i=0;i<n;i++)
			cin>>s[i];
		cin>>ss;
		memset(c,0,sizeof(c));
		int tmp=0,ans=0;
		for (int i=0;i<ss.length();i++){
			if (ss[i]=='_') tmp++;
			else c[ss[i]-'A']++;
		}
		for (int i=0;i<n;i++){
			memset(d,0,sizeof(d));int tmp1=0;
			for (int j=0;j<s[i].length();j++){
				d[s[i][j]-'A']++;
				if (c[s[i][j]-'A']<d[s[i][j]-'A']) tmp1++;
				if (tmp<tmp1) break;
			}
			if (tmp>=tmp1) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}