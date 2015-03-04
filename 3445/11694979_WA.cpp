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
		double tmp=0;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]==',')tmp++;
		}
		tmp=s.length()-tmp;
		a=floor(log(tmp)/log(2.0)+0.5)-1;
		cin.sync();cin.clear();
		getline(cin,s);
		tmp=0;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]==',')tmp++;
		}
		tmp=s.length()-tmp;
		b=floor(log(tmp)/log(2.0)+0.5)-1;
		//cout<<a+b<<"  ";
		print(a+b);
		cout<<endl;
	}
}