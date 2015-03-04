#include<iostream>
#include<algorithm>
using namespace std;

int a[64];
bool b[64];
int c[64];

int main()
{
	int n,s;
	cin>>n;
	while (n){
		s=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		sort(a,a+n);
		for (int l=a[n-1];l<=s;l++){
			if (s%l) continue;
			int i=s/l;
			fill(b,b+n,1);
			fill(c,c+i,0);
			for (int j=0;j<i;j++)
			{
				for (int k=n-1;k>=0;k--)
					if (b[k]&&a[k]<=l-c[j]){
						b[k]=0;
						c[j]+=a[k];
						if (c[j]==l) break;
					}
				if (c[j]<l) break;
			}
			if (c[i-1]==l) {cout<<l<<endl;break;}
		}
		cin>>n;
	}
	system("pause");
}