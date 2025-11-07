#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number till you have to sum";
    cin>>n;

    //cout<<(n*(n+1))/2;

    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<sum<<endl;
    return 0;
}