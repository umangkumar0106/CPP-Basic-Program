#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter any number: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
