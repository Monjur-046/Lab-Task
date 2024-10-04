#include<stdio.h>
int main () {
    int A,B,sum;
    scanf("%d%d", &A, &B);
    sum = A + B;
    if (sum%2==0) {
        printf("EVEN\n");
    }
    else {
        printf("ODD\n");
    }
    return 0;
}
