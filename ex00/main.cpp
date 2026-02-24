#include "whatever.hpp"

int main()
{
	int a = 6;
	int b = 1;
	int c = 6;

	std::string d = "chaine 1";
	std::string e = "chaine 2";
	std::string f = "chaine 1";


	std::cout << "=== TEST MIN/MAX INT ===" << std::endl;

	std::cout << "a = " << a << ",  b = " << b << " | max: ";
	std::cout << ::max(a, b) << std::endl;
	
	std::cout << "a = " << a << ",  b = " << b << " | min: ";
	std::cout << ::min(a, b) << std::endl;
	
	std::cout << std::endl;
	std::cout << "a = " << a << ",  c = " << c << " | max equal: ";
	std::cout << ::max(a, c) << std::endl;
	std::cout << "adresse c: " << &c << std::endl;
	std::cout << "adresse retour : " << &(::max(a, c)) << std::endl;
	
	std::cout << std::endl;
	std::cout << "a = " << a << ",  c = " << c << " | min equal: ";
	std::cout << ::min(a, c) << std::endl;
	std::cout << "adresse c: " << &c << std::endl;
	std::cout << "adresse retour : " << &(::min(a, c)) << std::endl;
	std::cout << std::endl; 


	std::cout << "=== TEST MIN/MAX STRING ===" << std::endl;

	std::cout << "d = " << d << ",  e = " << e << " | max: ";
	std::cout << ::max(d, e) << std::endl;
	
	std::cout << "d = " << d << ",  e = " << e << " | min: ";
	std::cout << ::min(d, e) << std::endl;
	
	std::cout << std::endl;

	std::cout << "d = " << d << ",  f = " << f << " | max equal: ";
	std::cout << ::max(d, f) << std::endl;
	std::cout << "adresse f: " << &f << std::endl;
	std::cout << "adresse retour : " << &(::max(d, f)) << std::endl;
	
	std::cout << std::endl;

	std::cout << "d = " << d << ",  f = " << f << " | min equal: ";
	std::cout << ::min(d, f) << std::endl;
	std::cout << "adresse f: " << &f << std::endl;
	std::cout << "adresse retour : " << &(::min(d, f)) << std::endl;
	std::cout << std::endl; 


	std::cout << "=== TEST SWAP ===" << std::endl;

	std::cout << "value a: " << a << " |  value b: " << b << std::endl;
	::swap(a, b);
	std::cout << "swap a -> b | a = " << a << " swap b -> a | b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << "value d : " << d << " |  value e : " << e << std::endl;
	::swap(d, e);
	std::cout << "swap d -> e | d = " << d << " swap e -> d | e = " << e << std::endl;
}

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
