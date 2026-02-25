
#include "iter.hpp"

template <typename T>
void print(T const  &val)
{
	std::cout << val << " ";
}


template <typename T>
void x2(T &val)
{
	val *= 2;
} 

template <typename T>
void toUpper(T &val)
{
	val -= 32;
}


int main()
{
	std::cout << "=== TEST INT ===" << std::endl;
	int tab1[] = {1, 2, 3};
	std::cout << "Beginning value: ";
	iter(tab1, 3, print<int>);

	std::cout << std::endl;

	iter(tab1, 3, x2<int>);
	std::cout << "Multi x2 value: ";
	iter(tab1, 3, print<int>);

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "=== TEST CHAR ===" << std::endl;
	char tab2[] = {'a', 'b', 'c'};
	std::cout << "Beginning value: ";
	iter(tab2, 3, print<char>);

	std::cout << std::endl;

	std::cout << "to upper: ";
	iter(tab2, 3, toUpper<char>);
	iter(tab2, 3, print<char>);

	std::cout << std::endl;

}
