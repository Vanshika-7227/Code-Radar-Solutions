#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+' :c=a+b;
        printf("%d",c);
        break;
        case '-' : c=a-b;
        printf("%d",c);
        break;
        case '*' :c=a*b;
        printf("%d",c);
        break;
        case '/' : 
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");
        }
        break;
        default: printf("error");
        break;
    }
    return 0;
}