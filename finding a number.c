#include<stdio.h>
int main()
{
   int a;
   printf("enter the value of a");
   scanf("%d",&a);
   if(a==1){
       printf("a is 1");
   }
   else if(a==2){
       printf("a is 2");
   }
   else if(a==3){
       printf("a is 3");
   }
   else{
       printf("a is anything");
   }
   return 0;
}