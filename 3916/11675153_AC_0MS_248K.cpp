#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n&&n){
		int a1=0,a2=0;
		for (int i=0;i<n;i++)
		{
			cin>>a2;
			if (a2!=a1){
				cout<<a2<<" ";
				a1=a2;
			}
		}
		cout<<"$\n";
	}
	return 0;
}