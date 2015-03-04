#include<iostream>
#include<string>
using namespace std;

int nex[100];
int ans;

void getNext(string t,int n[]){
	t=char(t.length())+t;
	int i=1,j=0;
	n[1]=0;
	while(i<t[0]){
		while(j>0&&t[i]!=t[j])j=n[j];
		i++;j++;
		if (t[i]==t[j])n[i]=n[j];
		else n[i]=j;
	}

}


void getNext1(string s)
{
	s=char(s.length())+s;
	nex[1]=0;
	int k=0;
	for (int q=2;q<s.length();q++)
	{
		while(k>0&&s[k+1]!=s[q])
			k=nex[k];
		if (s[k+1]==s[q])
			k++;
		nex[q]=k;
		if (s[k+1]==s[q+1])
			nex[q]=nex[nex[q]];
	}
}

void KMP(string t,string s)
{
	s=char(s.length())+s;
	t=char(t.length())+t;
	int k=0;
	bool flag=false;
	for (int q=1;q<=t.length();q++)
	{
		while(k>0&&s[k+1]!=t[q])
			k=nex[k];
		if (s[k+1]==t[q])
			k++;
		if (k==s.length()-1)
		{
			ans++;
			//printf("find %d\n",q-k);
			k=nex[k-1]+1;
			flag=true;
		}
	}
	//if (!flag)
		//printf("find %d\n",-1);
}

int main()
{
	string s,s2;
	int T=0;
	cin>>T;
	while(T--)
	{/*
		getNext(s,nex);
		for (int i=0;i<s.length();i++)
			cout<<s[i]<<" ";
		cout<<endl;
		for (int i=1;i<=s.length();i++)
			cout<<nex[i]<<" ";
		cout<<endl<<"***************************"<<endl;
		*/
		getNext1(s);/*
		for (int i=0;i<s.length();i++)
			cout<<s[i]<<" ";
		cout<<endl;
		for (int i=1;i<=s.length();i++)
			cout<<nex[i]<<" ";
		cout<<endl;*/
		cin>>s;
		cin>>s2;
		ans=0;
		KMP(s2,s);
		cout<<ans<<endl;
	}

}