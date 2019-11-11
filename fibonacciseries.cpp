#include<stdio.h>
int main(){
    int a=0,b=1,c,n,i;
    printf("Enter number till which you want the fibonacci series");
    scanf("%d", &n);
    printf("%d", a);
    printf("%d", b);
    for(i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;

    
    printf("%d",c);
    }
    return 0;
    
}