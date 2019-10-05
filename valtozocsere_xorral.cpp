#include"std_lib_facilities.h"
using namespace std;

int main()
{
	int a = 0, b = 0;

	cout << "Adjon meg ket szamot:\n";
	cin >> a;
	cin >> b;

	cout << "\nElso valtozo= " << a << "\n";
	cout << "Masodik valtozo= " << b << "\n\n";

	a ^= a b;
	b ^= a b;
	a ^= a b;

	cout << "Csere utan:\n"
		"a= " << a << "\n"
		"b=" << b << "\n";


	return 0;
}