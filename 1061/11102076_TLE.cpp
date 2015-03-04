#include<iostream>
using namespace std;

int main()
{
	int x,y,m,n,l,spe;
	long long len,tmp;
	cin>>x>>y>>m>>n>>l;
	if ((x-y)*(m-n)>0){
		tmp=l-abs(x-y);
		spe=abs(m-n);
	}else if ((x-y)*(m-n)<0){
		tmp=abs(x-y);
		spe=abs(m-n);
	}else {
		if (m==n)
			cout<<0<<endl;
		else
			cout<<"Impossible\n";
		return 0;
	}
	len=tmp;
	while(len<tmp*tmp+1){
		if (len%spe==0)
		{
			cout<<len/spe<<endl;
			break;
		}else{
			len+=l;
		}
	}
	if (len>=tmp*tmp+1) cout<<"Impossible\n";
	system("pause");
}