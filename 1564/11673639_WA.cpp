#include <iostream>

using namespace std;

int a[18];
int t,n;
int ans[18];
int anst[18];
int tmp,flag;

void go(int p,int s)
{
	s+=a[p];
	ans[tmp++]=a[p];
	if (s==t){
		int i;
		for (i=0;i<tmp-1;i++)
			if (anst[i]!=ans[i]) break;
		if (i<tmp-1){
			for (int i=0;i<tmp-1;i++)
				anst[i]=ans[i];
			for (int i=0;i<tmp-1;i++)
				cout<<ans[i]<<"+";
			cout<<ans[tmp-1]<<endl;
			flag++;
		}
	}
	else if (s<t)
		for (int i=p+1;i<n;i++)
			go(i,s);
	s-=a[p];
	tmp--;
}

int main()
{
	while (cin>>t>>n){
		if (t==0&&n==0)break;
		for (int i=0;i<n;i++)
			cin>>a[i];
		cout<<"Sums of "<<t<<":"<<endl;
		tmp=0;flag=0;
		memset(ans,0,sizeof(ans));
		memset(anst,0,sizeof(anst));
		for (int i=0;i<n;i++)
			go(i,0);
		if (!flag)
			cout<<"NONE\n";
	}
	return 0;
}