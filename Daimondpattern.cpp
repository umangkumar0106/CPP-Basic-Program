#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        for(int h=1;h<=i;h++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=n;i>=0;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        for(int h=1;h<=i;h++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}