#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	long long a, b, k, t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b >> k;
		if (k % 2 == 0) {
			cout << k / 2 * (a - b) << endl;
		} else {
			cout << k / 2 * (a - b) + a << endl;
		}
	}

	return 0;
}