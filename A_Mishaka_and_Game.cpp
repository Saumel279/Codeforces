#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int m,sm=0,c,sc=0;
    for(int i = 0; i < n; i++)
    {
        cin >> m >> c;
        if(m>c) sm++;
        else if(c>m) sc++;
    }   
    if(sm>sc) cout<<"Mishka"<<endl;
    else if(sc>sm)cout<<"Chris"<<endl;
    else if(sc==sm)cout<<"Friendship is magic!^^"<<endl;
    return 0;
}