#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,b,aa,bb,ans;
		cin>>a>>b;
		aa=a;ans=0;
		while (aa){
			bb=b;
			while (bb){
				ans+=(aa%10)*(bb%10);
				bb/=10;
			}
			aa/=10;
		}
		cout<<ans<<endl;
		system("pause");
}