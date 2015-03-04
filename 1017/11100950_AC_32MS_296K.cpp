#include<iostream>
using namespace std;

int main()
{
	int a[7],b[7],ans=0;
	while (1){
		for (int i=1;i<=6;i++){
			cin>>a[i];
			b[i]=0;
		}
		if (a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0)
			break;
		ans=a[6];
		ans+=a[5];
		if (a[5]) b[1]+=a[5]*11;
		ans+=a[4];
		if (a[4]) b[2]+=a[4]*5;
		if (a[3]%4==0)
			ans+=a[3]/4;
		else {
			ans+=a[3]/4+1;
			switch(a[3]%4){
			case 3:
				b[2]+=1;b[1]+=5;
				break;
			case 2:
				b[2]+=3;b[1]+=6;
				break;
			case 1:
				b[2]+=5;b[1]+=7;
				break;
			}
		}
		if (a[2]>b[2]){
			ans+=(a[2]-b[2]-1)/9+1;
			b[2]=9-(a[2]-b[2]-1)%9-1;
		}else{
			b[2]-=a[2];
		}
		b[1]+=b[2]*4;
		if(a[1]>b[1])
			ans+=(a[1]-b[1]-1)/36+1;
		cout<<ans<<endl;
	}
	system("pause");
}