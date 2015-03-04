#include<iostream>
using namespace std;

int main()
{
	double r,m;
	int y;
	cin>>r>>m>>y;
	r=r/100+1.0;
	for (int i=0;i<y;i++)
		m*=r;
	cout<<int(m)<<endl;
	system("pause");
}