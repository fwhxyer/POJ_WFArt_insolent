#include<iostream>
using namespace std;

int main()
{
	int t,a,b,c,d;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>a>>b>>c>>d;
		if((d-c==c-b)&&(c-b==b-a))
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+d-c<<endl;
		else if ((d/c==c/b)&&(c/b==b/a))
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(d/c)<<endl;
	}
	system("pause");
}