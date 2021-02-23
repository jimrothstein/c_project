#include <iostream>

using namespace std;

/* USAGE:
 * c++ program
 *
 * compile g++ <file>
 *
 * to run:
 * ./a.out
 *
 * <waits for using input:  n>
 * if even returns n/2
 * if oddd returns 3n+1
 * always converges, but NO PROOF!
 * if exceed int:   replace with long long
 */


int main (void)
{
	int n;
	cin >> n;
	while (true) {
		cout << n << " ";
		if (n == 1 ) break;
		if (n%2 == 0) n /= 2;
		else n = n*3 + 1;
	}
	cout << "\n";

}


			
