#include<iostream>
#include<fstream>
using namespace std;


int find(int i)
{
		int tmp=i,ans=0;
		while (1){
			ans++;
			if (tmp==1) 
				break;
			if (tmp%2==1) tmp=3*tmp+1;
			else tmp=tmp/2;
		}
		return ans;
}

int main()
{
	int a,b,maxt,ans;
	bool bb=false;
	while (cin>>a>>b){
		maxt=0;
		if (a>b){
			a=a^b;
			b=a^b;
			a=a^b;
			bb=true;
		}
		for (int i=a;i<=b;i++){
			ans=find(i);
			if (maxt<ans) maxt=ans;
		}
		if (bb){
			a=a^b;
			b=a^b;
			a=a^b;
		}
		cout<<a<<" "<<b<<" "<<maxt<<endl;
	}
}