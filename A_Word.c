#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];   
    scanf("%s",s);
    int len = strlen(s);
    int up = 0, lc = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            lc++;
        else if(s[i]>='A' && s[i]<='Z')
            up++;
    }
    if(lc>up||lc==up)
    {
        for(int j = 0; j < len; j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                s[j]+=32;
            }
        }
    }
    else if(up>lc)
    {
      for(int k = 0; k < len; k++)
        {
            if(s[k]>='a' && s[k]<='z')
            {
                s[k]-=32;
            }
        }
        
    }
    printf("%s\n",s);
    return 0;
}