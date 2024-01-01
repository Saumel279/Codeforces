#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>v(7);
        for(int i = 0; i < 7; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for(int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
        cout<<sum<<endl;
    }   
    return 0;
}