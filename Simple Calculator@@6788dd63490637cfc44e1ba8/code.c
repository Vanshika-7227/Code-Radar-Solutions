#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d",&a,&b);
    switch(result){
        case '+' :
        result=a+b;
        break;
        case '-' :
        result=a-b;
        break;
        case '*' :
        result=a*b;
        break;
        case '/' :
        result=a/b;
        break;
    }
    printf("%d",result);
    return 0;
}