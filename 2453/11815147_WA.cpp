#include <iostream>

using namespace std;

int pow2[21]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576};

int get(int n){
	int ans=0;
	for (int i=0;i<20;i++)
		if (n&pow2[i]) ans++;
	return ans;
}
int main()
{
	int n;
	while (cin>>n&&n){
		int ans=get(n);
		while (get(++n)!=ans);
		cout<<n<<endl;
	}
	return 0;
}