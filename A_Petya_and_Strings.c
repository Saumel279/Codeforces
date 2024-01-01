#include<stdio.h>
#include<string.h>
void compare(char ch1[], char ch2[]);
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s %s",str1,str2);
    compare(str1,str2);
    return 0;
}
void compare(char ch1[], char ch2[])
{
        int len = strlen(ch1);
        int flag = 0;
        for(int i = 0; i < len; i++)
        {
            if(ch1[i]>='a')
                ch1[i]-=32;
            if(ch2[i]>='a')
                ch2[i]-=32;
        }
        for(int j = 0; j < len; j++)
        {
            if(ch1[j]>ch2[j])
            {
                printf("1\n");
                flag++;
                break;
                
            }
            else if(ch1[j]<ch2[j])
            {
                printf("-1\n");
                flag++;
                break;
            }
        }
        if(flag==0)
        printf("0\n");
}
