#include<stdio.h>
int facto(int);
main(){
 int a ,b;
 printf("Enter your number for factorial");
 scanf("%d",&a);



 facto(a);

}
int facto(int a){
int n,m=1;
for(n=1;n<=a;n++){
    m=m*n;
}
    printf("%d",m);
    return(0);

}
