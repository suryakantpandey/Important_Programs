#include<stdio.h>
#include<conio.h>
int main(){
 int n , x,i ;
 float t=1;
 printf("Enter the value of x");
 scanf("%d",&x);
 printf("Enter the value of n");
 scanf("%d",&n);
 for (i=1;i<n;i++){
 t=t+t*(x/i)+1;
 }
 printf("%f",t);
 return(t);
 }
