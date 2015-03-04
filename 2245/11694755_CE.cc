#include<iostream>
#include<string>

using namespace std;

string a[20];
bool b[20];

int n;
string ans;

void re(int p,int q){
	if (p>=6){
		cout<<ans.substr(1,ans.length()-1)<<endl;
		return;
	}
	for (int i=q;i<n;i++)
		if (!b[i])
		{
			b[i]=true;
			ans+=' ';
			ans+=a[i];
			re(p+1,i+1);
			ans=ans.substr(0,ans.length()-1-a[i].length());
			b[i]=false;
		}
}

int main()
{
	while(cin>>n&&n)
	{
		ans="";
		memset(b,0,sizeof(b));
		for (int i=0;i<n;i++)
			cin>>a[i];
		re(0,0);
		cout<<endl;
	}
	return 0;
}