#include <iostream>

using namespace std;

struct Bigplus{
	int data[1000];
	Bigplus(){data[0]=1;data[1]=0;};
	Bigplus(int a){data[0]=1;data[1]=a;};
	Bigplus operator + (Bigplus t) {
		int l;
		if (data[0]>t.data[0]) l=data[0];
		else l=t.data[0];
		for (int i=data[0]+1;i<=l;i++) data[i]=0;
		for (int i=t.data[0]+1;i<=l;i++) t.data[i]=0;
		int ins=0;
		for (int i=1;i<=l;i++){
			data[i]+=t.data[i]+ins;
			ins=0;
			if (data[i]/10) {
				ins=data[i]/10;
				data[i]%=10;
			}
		}
		while (ins){
			l++;
			data[l]=ins%10;
			ins/=10;
		}
		data[0]=l;
		return *this;
	}
};
	
ostream& operator<<(ostream &ou,Bigplus b){
	for (int i=b.data[0];i>0;i--)
		cout<<b.data[i];
	return ou;
}

Bigplus f[251][4]={};
int main()
{
	int n;
	f[0][3]=1;
	for (int i=1;i<=250;i++)
	{
		f[i][0]=f[i-1][3];
		f[i][1]=f[i-1][2];
		f[i][2]=f[i-1][1];
		f[i][3]=f[i-1][0]+f[i-1][0]+f[i-1][3];
	}
	while (cin>>n){
		cout<<f[n][3]<<endl;
	}
	/*
	int aa,bb;
	while (cin>>aa>>bb){
		Bigplus a=aa;
		Bigplus b=bb;
		cout<<a+b+a+b<<endl;
	}
	*/
	return 0;
}
