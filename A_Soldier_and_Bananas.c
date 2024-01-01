#include<stdio.h>
int main()
{
    int cost;
    int money;
    int wants;
    scanf("%d%d%d",&cost,&money,&wants);
    int sum = 0;
    for(int i = 1; i <= wants; i++)
    {
        sum = sum + cost * i;
    }   
    if(sum>money)
    printf("%d\n",sum-money);
    else
    printf("0\n");
    
    return 0;
}