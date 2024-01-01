#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; char ch[n];
    string s = "Codeforces";
    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        cin >> ch[i];
        for(int j = 1; j < s.size(); j++)
        {
            if(ch[i]==s[j])
            {
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if(flag == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}