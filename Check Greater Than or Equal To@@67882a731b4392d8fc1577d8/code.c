#include<stdio.h>
int main(){
    float a,b;
    scanf("%f, %f",&a,&b);
    if(a>=b){
        printf("True");
    }
    else if(a<b){
        printf("False");
    }
    return 0;
}