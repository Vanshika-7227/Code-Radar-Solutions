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
        case '/' : c=a/b;
        printf("%d",c);
        break;
        default: printf("Error");
        break;
    }
    return 0;
}