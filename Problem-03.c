#include<stdio.h>
int main()
{
int A, B, C;
scanf("%d%d%d", &A, &B, &C);
if(A>=B){

    if(A>=C){
        printf("%d \n", A);
        }
    else{
        printf("%d \n", C);
        }
    }
    else{
        if(B>=C)
        {
        printf("%d \n", B);
        }
    else{
        printf("%d \n", C);
        }

    }


    return 0;
}
