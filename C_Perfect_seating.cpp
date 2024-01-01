#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int count = 0,min = a[0];
        for(int i = 1; i < n; i++)
        {
            if(min>a[i])
            {
                break;
            }
            else 
            {
                min = a[i];
                count++;
            }
        }
        if((count+1)==n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }   
    return 0;
}