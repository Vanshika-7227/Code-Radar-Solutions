#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a=='R'){
        printf("Stop");
    }
    else if(a=='G'){
        printf("Go");
    }
    else if(a=='y'){
        printf("Slow Down");
    }
    return 0;
}