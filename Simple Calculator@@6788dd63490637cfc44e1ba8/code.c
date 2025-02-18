#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d %c",&a,&b,&result);
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
    return 0;
}