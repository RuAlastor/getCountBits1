#include <iostream> 

typedef unsigned char byte;

int getCountBits1(const byte);

int main() {

	char input_value;
	std::cout << "Enter a single symbol:\n";
	std::cin >> input_value;
	std::cout << getCountBits1(input_value) << "\n";

	system("pause");

	return 0;
}

int getCountBits1(const byte b) {
	
	int res = 0;
	byte a = b;
	while (a) {
		res += (a & 1);
		a >>= 1;
	}

	return res;
	

	/*
	return (b & 1) +
		((b >> 1) & 1) +
		((b >> 2) & 1) +
		((b >> 3) & 1) +
		((b >> 4) & 1) +
		((b >> 5) & 1) +
		((b >> 6) & 1) +
		((b >> 7) & 1); 
	*/
}