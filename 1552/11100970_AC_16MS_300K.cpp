#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int a[100];

int main()
{
	int t;
	cin>>t;
	while(t!=-1){
		int tmp,i=0;
		tmp=t;
		while (tmp!=0){
			a[i++]=tmp;
			cin>>tmp;
		}
		sort(a,a+i);
		int ans=0;
		for (int j=1;j<i;j++)
			for (int k=0;k<j;k++)
			{
				if (a[k]*2>a[j]) break;
				else if (a[k]*2==a[j]) {ans++;break;}
			}
		cout<<ans<<endl;
		cin>>t;
	}
	system("pause");
}