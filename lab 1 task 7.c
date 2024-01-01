#include<stdio.h>
int main()
{
    int A,B,C,M;
    float D;
    scanf("%d %d %d %f",&A,&B,&C,&D);
    M=(pow(A,C)+B*A-(D/3));
    printf("%d",M);




    return 0;
}
