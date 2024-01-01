#include<stdio.h>
void next_round(int x, int y);
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);   
    next_round(n,k);
    return 0;
}
void next_round(int x, int y)
{
    int a[100],count=0;
    for(int i = 0; i < x; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < x; i++)
    {
        if(a[y-1]<=a[i] && a[i]>0)
        {
            count++;
        }
    }
    printf("%d\n",count);
}