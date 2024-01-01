#include<iostream>

using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    char ch,temp = '0';
    for(i = 0; i < n; i++)
    {
        cin>>ch;
        if(ch==temp) 
        c++;
        temp = ch;
    }
    cout<<c;
    return 0;
}