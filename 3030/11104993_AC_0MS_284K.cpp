#include<iostream>
using namespace std;

int main()
{
	int n,a,b,c;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a>>b>>c;
		b-=c;
		if (a>b)
			cout<<"do not advertise\n";
		else if (a<b)
			cout<<"advertise\n";
		else if (a==b)
			cout<<"does not matter\n";
	}
	system("pause");
}
