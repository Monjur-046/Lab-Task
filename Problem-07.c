#include<stdio.h>
  int main(){
  int A,remainder;
  scanf("%d", &A);
  while(A>0){
        remainder = A%10;
        printf("%d",remainder);
        A = A/10;
    }
  return 0;
  }
