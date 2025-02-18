#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d",&a,&b);
    switch(result){
        case '+' :
        printf("%d",a+b);
        break;
        case '-' :
        printf("%d",a-b);
        break;
        case '*' :
        printf("%d",a*b);
        break;
        case '/' :
        printf("%d",a/b);
        break;
    }
    printf("%d",result);
    return 0;
}