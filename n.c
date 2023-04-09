#include<stdio.h>
int main (){
    char a;
    scanf("%c",&a);
    // if(a>='a' && a<='z')
    if(a>=97 && a<=122){
        //Choto Hater
        int ans = a-32;
        printf("%c",ans);
    }
    else{
        int ans = a+32;
        printf("%c",ans);
    }
    return 0;
}