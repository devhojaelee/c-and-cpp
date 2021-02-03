#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int input[3], answer[3],stk=0, ball=0;
    for (int i=0;i<3;i++)
    {
    scanf("%d",&input[i]);
    }
    srand((unsigned)time(NULL));
    //for(int j=0;j<3;j++)
    //{ //중복이안되도록
    answer[0]=rand()%10;
    answer[1]=rand()%10;
    while(answer[1]==answer[0])
    {
        answer[1]=rand()%10;
    }
    answer[2]=rand()%10;
    while(answer[2]==answer[1])
    {
        answer[2]=rand()%10;
    }
    for(int j=0;j<3;j++)
    {
    if(input[j]==answer[j])
    {
        stk++;
    }
    }

    if(input[0]==answer[1]||input[0]==answer[2]||input[1]==answer[0]||input[1]==answer[2]||
    input[2]==answer[0]||input[2]==answer[1])
    {
        ball++;
    }   

    if(input[0]==answer[1]) ball++;
    if(input[0]==answer[2]) ball++;
    if(input[1]==answer[0]) ball++;
    if(input[1]==answer[2]) ball++;
    if(input[2]==answer[0]) ball++;
    if(input[2]==answer[1]) ball++;

    printf("computer value : %d %d %d\n",answer[0],answer[1],answer[2]);
    printf("strike : %d, ball : %d",stk,ball);
    return 0;
}