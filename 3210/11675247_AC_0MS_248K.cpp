#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin>>n&&n!=0)
	{
		if (n%2)
			cout<<n-1<<endl;
		else
			cout<<"No Solution!\n";
	}
}