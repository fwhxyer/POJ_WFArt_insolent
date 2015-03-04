#include<iostream>
#include<algorithm>
using namespace std;

int a[64];
bool b[64];
int c[64];
int n,s;
bool flag=false;
bool flag1=false;

bool cmp(int a,int b)
{
	return a>b;
}

void go(int ll,int l,int nn)
{
	if (nn==0) {cout<<ll<<endl;flag=true;flag1=true;}
	if (flag) return;
	for (int k=0;k<n;k++){
		if (b[k]&&a[k]<=l){
			b[k]=0;
			if (l-a[k]==0){
				go(ll,ll,nn-1);
				break;
			}else if (l-a[k]>0)
				go(ll,l-a[k],nn);
				if (flag) return;
			b[k]=1;
			while (k<n&&a[k+1]==a[k]) k++;
		}
	}
}

int main()
{
	cin>>n;
	while (n){
		s=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		sort(a,a+n,cmp);
		flag1=false;
		for (int l=a[0];l<=s;l++){
			if (l==1251)
				l=1251;
			flag=false;
			if (s%l) continue;
			int i=s/l;
			fill(b,b+n,1);
			fill(c,c+i,0);
			go(l,l,i);
			if (flag1) break;
		}
		cin>>n;
	}
	system("pause");
}