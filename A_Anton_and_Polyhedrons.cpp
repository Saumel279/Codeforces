#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 0;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size()==11 && s[0]=='I') sum+=20;
        else if(s.size()==4) sum+=6;
        else if(s.size()==10) sum+=8;
        else if(s.size()==11) sum+=4;
        else if(s.size()==12) sum+=12;
    }   
    cout<<sum;
    return 0;
}