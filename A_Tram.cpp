#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max = 0;
    int a,b,sum = 0;
    for(int i = 0; i < n; i++)
    {
        
        cin>>a>>b;
        sum = sum - a + b;
        if(sum>max)
        max = sum;
        
    }
    cout<<max;
    return 0;
}