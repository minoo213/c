#include <stdio.h>

int main()
{
    char s1[] = {'a','b','c'};
    char s2[] = {'com','b','d','p','c'};
    int answer = 0;
    for(int i =0;i<3;i++)
    {
        for(int j= 0;j<5;j++)
        {
            if(s1[i] == s2[j])
                answer +=1;
        }
    }
    printf("%d",answer);

    return 0;
}