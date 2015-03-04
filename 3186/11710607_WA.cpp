#include<iostream>

using namespace std;

int a[2000];

int main()
{
	int n,ans=0,frnt=0,rear,age=1;
	cin>>n;
	for (rear=0;rear<n;rear++)
		cin>>a[rear];
	rear--;
	while (frnt<=rear)
	{
		if (a[frnt]<a[rear]){
			ans+=a[frnt]*(age++);
			frnt++;
		}else{
			ans+=a[rear]*(age++);
			rear--;
		}
	}
	cout<<ans<<endl;
	//system("pause");
	return 0;
}