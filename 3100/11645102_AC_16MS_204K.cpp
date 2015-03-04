//
//  main.cpp
//  3100
//
//  Created by 范 威 on 13-5-28.
//  Copyright (c) 2013年 范 威. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF&&!(a==0&&b==0)) {
        int ans;
        for (ans=0;ans<=1000100;ans++)
        {
            if (pow((double)ans, b)>=a)
                break;
        }
        if (pow((double)ans,b)-a<a-pow((double)(ans-1),b))
            cout<<ans;
        else
            cout<<ans-1;
        cout<<endl;
    }
    return 0;
}