#include<iostream>
using namespace std;

int hah[1000000]={0};

bool check(int a,int b){
	for (int i=0;i<b;i++)
		if (hah[i]==a) 
			return true;
	return false;
}

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
	int i=0;
	while(len<tmp*tmp+1){
		if (len%spe==0)
		{
			cout<<len/spe<<endl;
			break;
		}else{
			if (check(len%spe,i+1)){
				cout<<"Impossible\n";
				return 0; 
			}
			len+=l;
			hah[i++]=len%spe;
		}
	}
	if (len>=tmp*tmp+1) cout<<"Impossible\n";
	system("pause");
}