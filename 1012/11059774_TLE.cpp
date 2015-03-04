#include <iostream>
using namespace std;

int main()
{
	int k;
	cin>>k;
	while (k){
		int m=1;
		int p=k;
		int q=2*k-1;
		while (++m)
		{
			//cout<<m<<endl;
			int tmp=m-1;
			int len=k*2;
			int q=2*k-1;
			while (p<=tmp%(len) && tmp%(len)<=q)
			{
				//cout<<"killbad:"<<tmp%(len)<<" p,q:"<<p<<" "<<q<<" len "<<len<<endl;
				q--;
				//cout<<"tmp="<<tmp<<"--->";
				len--;
				tmp=(tmp%(len+1)+m-1)%(len);
				//cout<<tmp<<endl;
			}
			if (p>q) {cout<<m<<endl;break;}
				//else cout<<"killgood:"<<tmp<<endl;
		}
		cin>>k;
	}
	return 0;
}