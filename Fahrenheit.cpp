#include <iostream>
using namespace std;
void convertFtoC(float* f, float* c) {
    *c = (*f - 32) * 5 / 9;
}
int main() {
    float f, c;
    cout << "Enter the temperature in Fahrenheit = ";
    cin >> f;
    convertFtoC(&f, &c);
    cout << "Temperature in Celsius = " << c << endl;
    return 0;
}

