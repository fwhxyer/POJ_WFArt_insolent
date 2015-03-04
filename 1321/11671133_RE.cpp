#include <iostream>
#include <string>

using namespace std;

int F(int a)
{
	if (a<=1) return 1;
	else return a*F(a-1);
}
int C(int a,int b){
	if (a<b)return 0;
	if (a==b)return 1;
	return F(a)/(F(b)*F(a-b));
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