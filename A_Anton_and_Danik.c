#include<stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int d = 0,a = 0;
    char s[n];
    scanf("%s",s);
    for(int i = 0; i < n; i++) 
    {
        if(s[i]=='A')
        {
            a++;
        }
        else if(s[i]=='D')
        {
            d++;
        }

    }
    if(a>d)
    printf("Anton\n");
    else if(a<d)
    printf("Danik\n");
    else
    printf("Friendship\n");
    return 0;
}