#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];   
    char s2[100];
    scanf("%s%s",s,s2);
    int len = strlen(s);
    for(int i = len; i > 0; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            if(s[i]==s2[j])
        }
    }
    return 0;
}