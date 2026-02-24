
#include "whatever.hpp"

int main()
{
	
	int a = 6;
	int b = 1;
	int c = 6;

	std::cout << "=== TEST MIN/MAX ===" << std::endl;

	std::cout << "a = 6,  b = 1 | max: ";
	std::cout << max<int>(a, b) << std::endl;
	
	
	std::cout << "a = 6,  b = 1 | min: ";
	std::cout << min<int>(a, b) << std::endl;
	
	
	std::cout << std::endl;
	std::cout << "a = 6,  c = 6 | max equal: ";
	std::cout << max<int>(a, c) << std::endl;
	std::cout << "adresse c: " << &c << std::endl;
	std::cout << "adresse retour : " << &(min(a, c)) << std::endl;
	
	
	std::cout << std::endl;
	std::cout << "a = 6,  c = 6 | min equal: ";
	std::cout << min<int>(a, c) << std::endl;
	
	std::cout << "adresse c: " << &c << std::endl;
	std::cout << "adresse retour : " << &(min(a, c)) << std::endl;
	std::cout << std::endl; 

	std::cout << "=== TEST SWAP ===" << std::endl;

	std::cout << "value a: " << a << " value b: " << b << std::endl;
	swap(a, b);
	std::cout << "swap a -> b: " << a << " swap b -> a: " << b << std::endl;

}