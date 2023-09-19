#include <iostream>

using namespace std;

int main()
{
	char x{ 6 }, y{ 8 };
	const char y2{ 64 };
	float z{ 9.5 };

	double remainder = fmod(z, x);
	cout << "Remainder = " << remainder << endl;

	const double result{ (remainder - 1.5) * (x + 34 * y - 4.3 * z / x) / (12 * z) };
	const double result2{ (remainder - 1.5) * (x + 34 * y2 - 4.3 * z / x) / (12 * z) };

	cout << "\nResult = " << result << endl;
	cout << "\nResult2 = " << result2 << endl;
	
	return 0;
}