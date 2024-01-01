#include<stdio.h>
#include<string.h>
void word(int x);
int main()
{
    int t;
    scanf("%d",&t);
    word(t);
    return 0;
}
void word(int x)
{
    while(x--)
    {
        char s[100],first,last;
        scanf("%s",s);
        int c=0,len = strlen(s);
        first = s[0];
        last = s[len-1];
        for(int i = 0; i < len; i++)
        {
            c++;
        }
        if(len>10)
        printf("%c%d%c\n",first,c-2,last);
        else
        printf("%s\n",s);
    }
}