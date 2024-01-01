#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);  
    int sum=0,a[n][3],i,j,count=0;
        for(i = 0; i < n ; i++)
        {
            for(j = 0; j < 3; j++)
            {
                scanf("%d",&a[i][j]);
                sum += a[i][j];
            }
            if(sum>=2)
            count++;
            sum = 0;
        }
    printf("%d\n",count);
    return 0;
}
