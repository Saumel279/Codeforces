//incomplete
#include<stdio.h>
int main()
{
    int a[5] = {5,4,3,2,1},b[5];
    int x,count = 0,sum=0,i;
    scanf("%d",&x);
    while(x>0)
    {
        
            sum = x / a[i];
            x = x % a[i];
            i++;
            count+=sum;
    }
    
    printf("%d\n",count);
    return 0;
}
