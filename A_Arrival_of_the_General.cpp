#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int maxi = v[0],mini = v[0];
    int maxi_pos = 0, mini_pos = 0;
    for(int i = 1; i < n; i++)   
    {
        if(maxi<v[i])
        {
            maxi = v[i];
            maxi_pos = i;
        }
        if(mini>=v[i])
        {
            mini = v[i];
            mini_pos = i;
        }
    }
    if(maxi_pos>mini_pos) mini_pos++;
    int res = maxi_pos + (n-1) - mini_pos;
    cout<<res<<endl;
}