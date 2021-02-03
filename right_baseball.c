#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int computerBall[3];
    int i,j;
    int temp;
    int userBall[3];
    int count = 1;
    int strike;
    int ball;

    srand((unsigned)time(NULL));
    for(i=0;i<3;i++)
    {
        temp = (rand()%9)+1;
        computerBall[i]=temp;
        for(j=0;j<i;j++)
        {
            if(temp==computerBall[j]&&i!=j) // 
            i--;
        }
    }
    return 0;
}