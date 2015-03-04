#include<iostream>
#include<string>
using namespace std;


string ans(int n)
{
	while (n%2==0&&n>2){
		n/=2;
	}
	if (n==2)
		return "YES";
	return "NO";
}

int main()
{
	int n=2;
	while(cin>>n)
	//while (n<65&&cout<<n<<" ")
		cout<<ans(n++)<<endl;
	return 0;
}