#include<stdio.h>
#include<stdlib.h>
void matrix(int x[][5]);
int main()
{
    int a[5][5];
    matrix(a);   
    
    return 0;
}
void matrix(int x[][5])
{
    int i,j,pos;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(x[i][j]==1)
            {
                pos=abs(i-2)+abs(j-2);
            }
        }
    }
    printf("%d\n",pos);
}