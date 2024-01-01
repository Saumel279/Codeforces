#include<stdio.h>
void watermelon(int x);
int main()
{
    int w;   
    scanf("%d",&w);
    watermelon(w);
    return 0;
}
void watermelon(int x)
{
    if(x==1||x==2)
    printf("NO\n");
    else if(x%2==0)
    printf("YES\n");
    else
    printf("NO\n");
}