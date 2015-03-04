#include <iostream>

using namespace std;

int a[18];
int t,n;
int ans[18];
int tmp,flag;
//bool hass[10000];

void go(int p,int s)
{
	s+=a[p];
	ans[tmp++]=p;
	if (s==t){
		/*int has=0;
		for (int i=0;i<tmp-1;i++)
			has+=(int)pow(2.0,ans[i]);
		if (!hass[has]){
			hass[has]=1;*/
			for (int i=0;i<tmp-1;i++)
				cout<<a[ans[i]]<<"+";
			cout<<a[ans[tmp-1]]<<endl;
			flag++;
		//}
	}
	else if (s<t)
		for (int i=p+1;i<n;i++)
			if (i==p+1||a[i]!=a[i-1]) go(i,s);
	s-=a[p];
	tmp--;
}

int main()
{
	while (cin>>t>>n){
		if (t==0&&n==0)break;
		for (int i=0;i<n;i++)
			cin>>a[i];
		a[n]=0;
		cout<<"Sums of "<<t<<":"<<endl;
		tmp=0;flag=0;
		memset(ans,0,sizeof(ans));
		//memset(hass,0,sizeof(hass));
		for (int i=0;i<n;i++)
			if (i==0||a[i]!=a[i-1]) go(i,0);
		if (!flag)
			cout<<"NONE\n";
	}
	return 0;
}