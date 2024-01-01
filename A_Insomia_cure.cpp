#include<iostream>

using namespace std;

int main()
{
    int k,l,m,n,d,c=0;
    cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; i++)
    {
        if(d%k==0||d%l==0||d%m==0)
        c++;
    }   
    cout<<c<<endl;
    return 0;
}