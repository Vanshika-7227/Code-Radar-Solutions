#include<stdio.h>
int mian(){
    int n,m;
    scanf("%d %d",&n,&m);
    int x=n>>m;
    printf("%d",x);
    return 0;
}