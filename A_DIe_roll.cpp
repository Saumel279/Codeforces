#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int g = __gcd(y, w);
    int fo = 6 - ((y + w) - 1) / 6;
    if (y == w)
        fo += 1;

    cout << fo / g << "/" << 6 / g;
    return 0;
}