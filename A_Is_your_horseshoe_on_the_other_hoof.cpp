#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[4],c=0;
    for(int i = 0; i < 4; i++)
    cin>>a[i];
    int len = sizeof(a) / sizeof(a[0]);
    sort(a,a+len);
    for(int i = 0; i < 4; i++)
    {
        if(a[i]==a[i+1])
        c++;
    }
    cout<<c;
    return 0;
}