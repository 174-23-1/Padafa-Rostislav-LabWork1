#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const char x{ 6 };
    char y{ 8 };
    const float z{ 9.5 };

    double power;
    {
        power = pow(y, 2);
        cout << "Squared number y = " << power << endl;
    }

    double remainder;
    {
        remainder = fmod(z, x);
        cout << "\nRemainder of z%x = " << 9.5 << "/" << 6 << " = " << remainder << endl;
    }
    
    const double result{ (remainder - 1.5) * (x + 34 * pow(y,2) - 4.3 * z / x) / (12 * z) };

    cout << "\nResult = " << result << endl;
    return 0;
}










