#include<iostream>
#include<string>
using namespace std;

int main()
{
	int ans[26],maxt;
	string s;
	fill(ans,ans+26,0);
	maxt=0;
	for (int i=0;i<4;i++){
		getline(cin,s);
		for (int j=0;j<s.length();j++)
			if (s[j]>='A'&&s[j]<='Z'){
				ans[int(s[j]-'A')]++;
				if (ans[int(s[j]-'A')]>maxt)maxt=ans[int(s[j]-'A')];
			}
	}
	for (int i=maxt;i>0;i--){
		for(int j=0;j<25;j++)
			if (ans[j]>=i) cout<<"* ";else cout<<"  ";
		if (ans[25]>=i) cout<<"*\n";else cout<<" \n";
	}
	for(int j=0;j<25;j++)
		cout<<char('A'+j)<<" ";
	cout<<"Z\n";
	system("pause");
}