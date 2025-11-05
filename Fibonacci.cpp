#include <iostream>
using namespace std;


// using recursion
int fibonacci(int n){
    
    if(n <= 1)
        return n;
        
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main()
{


    //for recursion
    // for(int i = 0; i < n; i++)
    //     cout << fibonacci(i) << ", ";

    int num;

    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci Series: ";

    int a = 0, b = 1;
    int next;
    // Here we are printing 0th and 1st terms

    for (int i = 0; i < num; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
