#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; int a,b,c; 
    a = b = c = 0;
    for(int i = 0; i < n; i++)   
    {
        cin >> a >> b >> c;
        if(a + b == c) cout<<"+"<<endl;
        else cout<<"-"<<endl;
    }
    return 0;
}