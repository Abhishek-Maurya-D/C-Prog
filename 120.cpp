// Power function using (lognithmac )

#include <iostream>
using namespace std;

// Function to calculate power in logarithmic time
long long power(int x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        long long temp = power(x, n / 2);
        return temp * temp;
    } else {
        long long temp = power(x, (n - 1) / 2);
        return x * temp * temp;
    }
}

int main() {
    int x, n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Result: " << power(x, n) << endl;
    return 0;
}
