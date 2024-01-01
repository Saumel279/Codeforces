#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    vector<int> a(p);
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    a.resize(p + q);
    for (int i = p; i < p + q; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int size = unique(a.begin(), a.end()) - a.begin();
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        {
            if (i+1 == a[i])
                flag++;
            else
                break;
        }
    }
    if (flag == n)
        cout << "I become the guy."<<endl;
    else
        cout << "Oh, my keyboard!" << endl;
}