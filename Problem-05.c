#include<stdio.h>
 int main(){
     char ch;
      scanf("%c",&ch);
     int A, B;
    scanf("%d%d", &A, &B);
   switch(ch){
   case '+':
       printf("%d\n", A+B);
       break;
   case '-':
       printf("%d\n", A-B);
       break;
   case '*':
       printf("%d\n", A*B);
       break;
   case '/':
       printf("%d\n", A/B);
       break;
   default:
       printf("What is it\n");
    }
              return 0;
 }
