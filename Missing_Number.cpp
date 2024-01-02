#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    int a[n];
    for (int i = 1; i < n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(i!=a[j])
            {
                flag = 1;
            }
            else 
            {
                flag = 0;
                continue;
            }
        }
        if(flag == 1)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}