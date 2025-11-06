#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any number";
    cin>>num;
    bool notprime=false;



    if(num<2)
    {
        notprime=true;
    
    }
    else{
        for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            notprime=true;
            break;
        }
    }
    }
  

    if(!notprime)
    {
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
    return 0;
}