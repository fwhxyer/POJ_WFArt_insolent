#include<iostream>
#include<string>
using namespace std;

string a,b;

bool go(char c,int &j)
{
	for (int i=j;i<b.length();i++)
		if (c==b[i]) {j=i+1;return true;}
	return false;
}

int main()
{
	while(cin>>a>>b)
	{
		if (a.length()>b.length())
		{
			cout<<"No\n";
			continue;
		}
		int tmp=0,i;
		for (i=0;i<a.length();i++)
			if (!go(a[i],tmp)) {
				cout<<"No\n";
				break;
			}
		if (i==a.length())
		{
			cout<<"Yes\n";
		}
	}
}