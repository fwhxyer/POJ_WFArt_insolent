#include<iostream>
using namespace std;

int main()
{
	double n,n1;
	cin>>n1;
	if (n1!=999)
	while (cin>>n&&n!=999)
	{
		printf("%0.2lf\n",n-n1);
		n1=n;
	}
	cout<<"End of Output"<<endl;
	return 0;
}