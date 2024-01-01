#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string>s;
        for(int i = 0; i < n; i++)
        {
            string inp;
            cin >> inp;
            s.push_back(inp);
        }
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[0]=='0'&&s[1]=='0')cout<<"YES"<<endl;
            else if(s[0]=='1'&&*s[1]=='1')cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        s.clear();
    }
    return 0;
}   