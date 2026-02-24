
#include "whatever.hpp"

int main()
{
	
	int a = 6;
	int b = 1;
	int c = 6;


	std::cout << std::endl; 
	std::cout << "max >: ";
	std::cout << max<int>(a, b) << std::endl;
	

	std::cout << std::endl;
	std::cout << "min > : ";
	std::cout << min<int>(a, b) << std::endl;


	std::cout << std::endl;
	std::cout << "max equal: ";
	std::cout << max<int>(a, c) << std::endl;
	std::cout << "adresse c: " << &c << std::endl;
	std::cout << "adresse retour : " << &(min(a, c)) << std::endl;


	std::cout << std::endl;
	std::cout << "min equal: ";
	std::cout << min<int>(a, c) << std::endl;

	std::cout << "adresse c: " << &c << std::endl;
	std::cout << "adresse retour : " << &(min(a, c)) << std::endl;

}