#include<iostream>
using namespace std;

int main()
{
	int n,tmp,ans=0,ansf=0,ansp=0;
	cin>>n;
	for (int i=0;i<n;i++){
		ans=0;
		for (int j=0;j<n;j++){
			cin>>tmp;
			if (tmp>=3) ans++;
		}
		if (ans>ansf) {ansf=ans;ansp=i;}
	}
	cout<<ansp+1<<endl;
	return 0;
}