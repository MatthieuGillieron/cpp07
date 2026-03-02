#include "Array.hpp"

int main()
{
    // Constructeur vide et avec taille
    Array<int> empty;
    Array<int> tab(5);
    std::cout << "Empty size: " << empty.getSize() << std::endl;
    std::cout << "Tab size: " << tab.getSize() << std::endl;
	
	// Const -> lecture seule
	const Array<int> constTab(tab);
	for (unsigned int i = 0; i < constTab.getSize(); i++)
		std::cout << constTab[i] << " ";
	std::cout << std::endl;


    // Lecture / ecriture
    for (unsigned int i = 0; i < tab.getSize(); i++)
        tab[i] = i;

    for (unsigned int i = 0; i < tab.getSize(); i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;


    // Out of range
    try {
        tab[999];
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}