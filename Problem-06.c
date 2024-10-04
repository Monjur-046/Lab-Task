#include<stdio.h>
  int main(){
    float A, B, C;
    scanf("%f%f%f", &A, &B, &C);
    if(A+B>C && A+C>B && B+C>A){

        printf("IT IS A TRIANGLE\n");

    }
    else{
        printf("IT IS NOT A TRIANGLE\n");
    }
    return 0;

  }
