#include<iostream>

using namespace std;

int t(int a)
{
	int ans=0;
	for (int i=1;i<=a;i++) ans+=i;
	return ans;
}

int w(int a)
{
	int ans=0;
	for (int i=1;i<=a;i++)
		ans+=i*t(i+1);
	return ans;
}

int main()
{
	int T,TT=1,n;
	cin>>T;
	while (T--)
	{
		cin>>n;
		cout<<TT++<<" "<<n<<" "<<w(n)<<endl;
	}
	return 0;
}
