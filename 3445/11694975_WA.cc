#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void print(int n)
{
	if (n==0) {cout<<"{}";return;}
	cout<<"{";
	for (int i=0;i<n-1;i++)
	{
		print(i);
		cout<<",";
	}
	print(n-1);
	cout<<"}";
}

int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		int a,b;
		string s;
		cin.sync();cin.clear();
		getline(cin,s);
		int tmp=0;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]==',')tmp++;
		}
		tmp=s.length()-tmp;
		a=log(tmp)/log(2)-1;
		getline(cin,s);
		tmp=0;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]==',')tmp++;
		}
		tmp=s.length()-tmp;
		b=log(tmp)/log(2)-1;
		//cout<<a+b<<"  ";
		print(a+b);
		cout<<endl;
	}
}