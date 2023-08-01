#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int price)
{
    int answer = 0;
    answer = price;
    if(price >= 100000)
        answer = price * 0.95;
    else if(price >= 300000)
        answer = price * 0.9;
    else if(price >= 500000)
        answer = price * 0.8;
    else
        answer = price;
    return answer;
}
int main(){
    printf("%d ",solution(580000));
    return 0;
}