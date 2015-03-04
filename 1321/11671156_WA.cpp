#include <iostream>
#include <string>

using namespace std;

int C(int a,int b){
	if (a<b)return 0;
	if (a==b)return 1;
	double ans=1;
	for (int i=b;i>0;i--)
	{
		ans*=double((a-b+i))/i;
	}
	return (int)ans;
}

int main()
{
	int a,b;
	while (cin>>a>>b){
		if (a==-1&&b==-1) break;
		string s;
		int n=0;
		for (int i=0;i<a;i++)
		{
			cin>>s;
			for (int j=0;j<s.length();j++)
				if (s[j]=='#') 
					n++;
		}
		cout<<C(n,b)<<endl;
	}
	return 0;
}