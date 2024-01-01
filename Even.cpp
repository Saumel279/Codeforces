#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ev = 0, od = 0;
        cin >> n;
        int ar[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                if (ar[i] % 2 == 0)
                    ev++;
                else if ((ar[i] + 1) % 2 == 0)
                    ev++;
            }
            else
            {
                if ((ar[i] + 1) % 2 == 0)
                    ev++;
            }
            if (i % 2 != 0)
            {
                if (ar[i] % 2 != 0)
                    od++;
                else if ((ar[i] + 1) % 2 != 0)
                    od++;
            }
            else
            {
                if ((ar[i] + 1) % 2 != 0)
                    od++;
            }
            
        }
        if (ev == n || od == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}