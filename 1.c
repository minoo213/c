#include<stdio.h>

int main()
{
    int inputDecimal = 6;
    int temp,length,i = 0;

    int outputBinary[length];
    for(i=length-1; inputDecimal>0;i--){
        outputBinary[i] = inputDecimal %2;
        inputDecimal = inputDecimal/2;
    }
    for(i=0;i<=length-1;i++)
    {
        printf("%d ",outputBinary[i]);
    }

    return 0;
}