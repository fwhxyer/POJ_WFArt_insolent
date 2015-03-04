#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define pi 3.1415926536

int main() {
	double D,V;
	double p,q;
	while (scanf("%lf%lf",&D,&V)!=EOF&&!(D==0&&V==0)){
		p=0;
		q=D;
		while (q-p>0.000001) {
			double d=(p+q)/2;
			double R=D/2.0,r=d/2;
			if (pi*R*R*D-V-pi*r*r*d-pi/3.0*(D-d)*(R*R+R*r+r*r)==0){
				break;
			}else if (pi*R*R*D-V-pi*r*r*d-pi/3.0*(D-d)*(R*R+R*r+r*r)>0){
				p=d;
			}else{
				q=d;
			}
		}
		printf("%0.3lf\n",(p+q)/2);
	}
	return 0;
}