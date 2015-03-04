#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t,tmp=1;
	string name[15];
	while(cin>>t&&t!=0)
	{
		for (int i=0;i<t/2;i++){
			cin>>name[i];
			cin>>name[t-i-1];
		}
		if (t%2)
			cin>>name[t/2];

		cout<<"SET "<<tmp<<endl;
		for (int i=0;i<t;i++) cout<<name[i]<<endl;
	}
	system("pause");
}