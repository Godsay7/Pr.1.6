#include <iostream>
#include <string>

void main()
{
	int A;
	std::cout << "Enter A: ";
	std::cin >> A;

	int count0 = 0, count1 = 0;

	for (int mask = 0; mask < sizeof(A) * 8; mask++) {
		if (A & (mask << 1)) {
			count1++;
		}
		else {
			count0++;
		}
	}
	if (count1 > count0) {
		std::cout << "Bits 1 more";
	}
	else if (count0 > count1) {
		std::cout << "Bits 0 more";
	} else {
		std::cout << "The number of bits 1 and 0 are the same";
	}
}
