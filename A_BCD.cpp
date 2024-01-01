#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int box = n / k;
    if(n%k!=0)box++;
    cout<<box;
    return 0;
}