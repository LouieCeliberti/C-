
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int product;
    int sum;
    cin >> a >> b;
    if (a % 2 == 0 && b % 2 == 0) {
        cout << "The two numbers you entered is even!" << endl;
    }
    else{
        cout << "The number you entered is odd :(" << endl;
    }
    product = a * b;
    sum = a + b;
    cout << product << endl;
    cout << sum << endl;
}
