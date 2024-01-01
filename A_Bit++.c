#include<stdio.h>
#include<string.h>
void Bit(int a);
int main()
{
    int n;
    scanf("%d",&n);
    Bit(n);

    return 0;
}
void Bit(int a)
{
    int X=0,i=0;
    char str[100];
    while(a--)
    {
        scanf("%s",str);
            if(str[i]=='+'&&str[i+1]=='+')
                    ++X;
             else if(str[i]=='X'&&str[i+1]=='+')
                    X++;
            else if(str[i]=='-'&&str[i+1]=='-')
                     --X;
             else if(str[i]=='X'&&str[i+1]=='-')
                     X--;
    }
    printf("%d\n",X);
}