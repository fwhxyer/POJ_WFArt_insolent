#include <iostream>
using namespace std;

int main()
{
	int n,y,m,d,h,mi,s;
	char tmp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>y>>tmp>>m>>tmp>>d>>tmp>>h>>tmp>>mi>>tmp>>s;
		bool p=0;
		if (h>=12) {h-=12;p=1;}
		if (h==0) h=12;
	/*	if (p)
			printf("%d/%d/%d-%d:%d:%dpm\n",m,d,y,h,mi,s);
		else
			printf("%d/%d/%d-%d:%d:%dam\n",m,d,y,h,mi,s);*/
		if (m<10) cout<<0<<m;
		else cout<<m;
		cout<<"/";
		if (d<10) cout<<0<<d;
		else cout<<d;
		cout<<"/";
		cout<<y;
		cout<<"-";
		if (h<10) cout<<0<<h;
		else cout<<h;
		cout<<":";
		if (mi<10) cout<<0<<mi;
		else cout<<mi;
		cout<<":";
		if (s<10) cout<<0<<s;
		else cout<<s;
		if (p) cout<<"pm"<<endl;
		else cout<<"am"<<endl;


	}
	return 0;
}