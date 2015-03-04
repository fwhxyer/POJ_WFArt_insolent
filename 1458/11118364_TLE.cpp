#include<iostream>
#include<string>
using namespace std;

int d[1000000],e[1000000];
string a,b;
int t=0;
void find(char c){
	for (int i=a.length()-1;i>=0;i--)
		if (a[i]==c){
			e[t]=1;
			d[t++]=i;
		}
}

int main()
{
	while(cin>>a>>b){
		t=0;
		int ans=0;
		for (int i=0;i<b.length();i++)
			find(b[i]);
		for (int i=1;i<t;i++)
			for (int j=0;j<i;j++){
				if (d[j]<d[i]&&e[j]+1>e[i]) e[i]=e[j]+1;
				if (e[i]>ans) ans=e[i];
			}
		if (t==1) ans=1;
		cout<<ans<<endl;
	}
}