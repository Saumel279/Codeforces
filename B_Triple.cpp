#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0,flag = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n >= 3)
        {
            sort(a, a + n);
            
        }
        else 
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}