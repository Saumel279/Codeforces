#include<iostream>

using namespace std;

int main()
{
    int n,i,p;
    cin>>n;
    int a[n];
    for(i = 1; i <= n; i++)
    {
        cin>>p;
        a[p] = i;
    }
    for(i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}