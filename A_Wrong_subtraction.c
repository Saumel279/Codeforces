#include<stdio.h>
int main()
{
    int n,k,sum = 0;
    scanf("%d%d",&n,&k);
    int temp = n;
    while(k--)
    {
        int last = n % 10;
        if(last!=0)
        {
            n = n - 1;
        }
        else if(last==0)
        {
            n= n / 10;
        }
    }   
    printf("%d\n",n);
    return 0;
}