#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, count = 0, rest = 0;
    if (n == 3)
        cout << "1" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
            n = n - sum;
            count++;
            if (sum > n)
                break;
        }
        cout << count << endl;
    }

    return 0;
}