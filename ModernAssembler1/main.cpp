#include <iostream>

using namespace std;

/// if you switch into x86 mode (32 bit) you can call assembly straight from c
int main() {
	int i = 0;
	_asm {
		mov i, 56757
	}
	cout << "The result is: " << i << "";
	return 0;
}