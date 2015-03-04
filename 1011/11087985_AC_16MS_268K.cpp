#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int a[65];
bool b[65],flag=0;
int sum=0;
int n,ll;

bool cmp(int a,int b){return a>b;}

void go(int l,int num,int k)
{
	if (num==0) {cout<<ll<<endl;flag=true;}
	if (flag) return;
	for (int i=k;i<n;i++){
		if (b[i]){
			b[i]=0;
			if (l>a[i])
				go(l-a[i],num,i+1);
			else if (l==a[i]){
				go(ll,num-1,0);b[i]=1;break;
			}
			b[i]=1;
			if (flag) return;
			while (i<n-1&&a[i+1]==a[i]) i++;
			if (l==ll) return;
		}
	}
}

int main()
{
	cin>>n;
	while (n) {
		sum=0;flag=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n,cmp);
		for (int i=a[0];i<=sum;i++)
		{
			if (sum%i==0)
			{
				fill(b,b+n,1);
				ll=i;
				go(i,sum/i,0);
			}
		}
		cin>>n;
	}
}
