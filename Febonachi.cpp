#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0)
        return 0; 
    else if (n == 1)
        return 1; 
    else
        return fibonacci(n - 1) + fibonacci(n - 2); 
}
int sumFibonacci(int n) {
    if (n == 0)
        return 0;
    else
        return fibonacci(n) + sumFibonacci(n - 1);
}
int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    int sum = sumFibonacci(n - 1); 
    cout << "Sum of Fibonacci series = " << sum << endl;
    return 0;
}
