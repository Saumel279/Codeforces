#include<stdio.h>
int main()
{
    int t,i=0;
    scanf("%d",&t);
    for(int i = 0; i < t; i++)
    {
        int num_ath;
        scanf("%d",&num_ath);
        int s[num_ath];
        int e[num_ath];
        for(int i = 0; i < num_ath; i++)
        {
            scanf("%d%d",&s[i],&e[i]);
        }
        for(int i = 1; i < num_ath; i++)
        {
            if(s[0]<s[i] && e[0]<e[i])
            {
                printf("-1\n");
                break;
            }
            else if(s[0]==s[i] && e[0]==e[i])
            {
                printf("-1\n");
                break;
            } 
            else
            {
                printf("possible\n");
                break;
            }
            
        }
        
    }
    
    return 0;
}