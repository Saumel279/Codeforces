#include<iostream>

using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i = 0; i < n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            c++;
        }
        else
        continue;
    }
    cout<<c+1;
    return 0;
}