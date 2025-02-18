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
    return 0;
}