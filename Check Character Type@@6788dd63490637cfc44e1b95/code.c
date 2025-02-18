#include<stdio.h>
int main(){
    char s;
    scanf("%c",&s);
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'){
        printf("Vowel");
    else if(s>='a'&&s<='z')||(s>='A'&&s<='Z'){
        printf("Consonant");
    }
    else if(s>=0&&s<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    }
}