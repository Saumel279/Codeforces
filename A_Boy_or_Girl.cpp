#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c = 0; 
    sort(s.begin(),s.end());
    for(int i = 0; i < s.size(); i++)
    {
            if(s[i]!=s[i+1]) 
            c++;
    }
    if(c % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}