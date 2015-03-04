#include<iostream>
#include <string>

using namespace std;

double a[100];
string s;

double lef(int p)
{
	int tmp=p-1;
	while (s[tmp]=='_')
		tmp--;
	if (s[tmp]=='.')
		return 100;
	return 0;
}
double rig(int p)
{
	int tmp=p+1;
	while (s[tmp]=='_')
		tmp++;
	if (s[tmp]=='.')
		return 100;
	return 0;
}

int main()
{
	while (cin>>s&&s!="#"){
		memset(a,0,sizeof(a));
		s='.'+s+'.';
		for (int i=0;i<s.length();i++)
		{
			if (s[i]=='/') a[i]=lef(i);
			else if (s[i]=='\\') a[i]=rig(i);
			else if (s[i]=='.') a[i]=100;
			else if (s[i]=='_') a[i]=0;
			else if (s[i]=='|') a[i]=0.5*lef(i)+0.5*rig(i);
		}
		double tmp=0;
		for (int i=1;i<s.length()-1;i++)
			tmp+=a[i];
		tmp/=s.length()-2;
		cout<<(int)tmp<<endl;
	}
	return 0;
}