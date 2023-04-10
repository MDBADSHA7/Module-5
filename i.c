#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d %d",&a,&b,&c);
    if(a%b==0){
        printf("Multiples\n");
    }
    else if(b%a==0)
    {
       printf("Multiples\n"); 
    }
    else{
        printf("No Multiples\n");
    }
    return 0;
}