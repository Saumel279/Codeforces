#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++)
    {
        int one = 0,zero=0;
        if(s[i]=='0')
        {
            zero++;
            one = 0;
        }
        else if(s[i]=='1')
        {
            one++;
            zero = 0;
        }
        if(one==7||zero==7)
        {
            cout<<"YES"<<endl;
            break;
        }
        else
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    
    return 0;
}