#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int a[10000010]={0};
int b[50010]={0};
int go[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9,0};

int getin()
{
	string str;
	cin>>str;
	int tmp=0;
	for (int i=0;i<str.length();i++)
		if (str[i]>='0'&&str[i]<='9')
			tmp=tmp*10+int(str[i]-'0');
		else if (str[i]!='-')
			tmp=tmp*10+go[int(str[i]-'A')];
	return tmp;
}

void print(int tmp)
{
	int tmp1=tmp/10000;
	if (tmp1>99)
		cout<<tmp1;
	else if (tmp1>9)
		cout<<'0'<<tmp1;
	else if (tmp1>=0)
		cout<<"00"<<tmp1;
	cout<<'-';
	tmp1=tmp%10000;
	if (tmp1>999)
		cout<<tmp1;
	else if (tmp1>99)
		cout<<'0'<<tmp1;
	else if (tmp1>9)
		cout<<'0'<<tmp1;
	else if (tmp1>=0)
		cout<<"00"<<tmp1;
	cout<<" "<<a[tmp]<<endl;
}

int main()
{
	int n;
	cin>>n;
	int j=0;
	for (int i=0;i<n;i++){
		int tmp;
		tmp=getin();
		a[tmp]++;
		if (a[tmp]==2)
			b[j++]=tmp;
	}
	sort(b,b+j);
	for (int i=0;i<j;i++)
		print(b[i]);
	system("pause");
}