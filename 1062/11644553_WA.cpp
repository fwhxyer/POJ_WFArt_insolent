//
//  main.cpp
//  1062
//
//  Created by 范 威 on 13-5-28.
//  Copyright (c) 2013年 范 威. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;

vector<int> e[101];
int arrA[101];
bool arrB[101];
bool flag[101];

int getAns(int n)
{
    int ans=arrA[n];
    for (int i=0;i<e[n].size();i+=2){
        if (arrB[e[n][i]]&&flag[e[n][i]]){
            flag[e[n][i]]=false;
            int tmp=e[n][i+1]+getAns(e[n][i]);
            if (tmp<ans) ans=tmp;
            flag[e[n][i]]=true;
        }
    }
    return ans;
}

int main(int argc, const char * argv[])
{
    int n,m,a,b,c;
    cin>>m>>n;
    scanf("%d%d%d",&a,&b,&c);
    arrA[1]=a;
    arrB[1]=1;
    memset(flag, 1, sizeof(flag));
    for (int i=1;i<=c;i++)
    {
        int aa,bb;
        scanf("%d%d",&aa,&bb);
        e[1].push_back(aa);
        e[1].push_back(bb);
    }
    for (int i=2;i<=n;i++)
    {
        int a,tb,c;
        scanf("%d%d%d",&a,&tb,&c);
        arrA[i]=a;
        arrB[i]=abs(tb-b)<=m?1:0;
        for (int j=0;j<c;j++)
        {
            int aa,bb;
            scanf("%d%d",&aa,&bb);
            e[i].push_back(aa);
            e[i].push_back(bb);
        }
    }
    printf("%d\n",getAns(1));
    return 0;
}