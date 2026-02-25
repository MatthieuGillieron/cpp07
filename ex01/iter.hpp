
#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>


template <typename T, typename F>
void iter(T *tab, const size_t len,  F func)
{
	for (size_t i = 0; i < len; i++)
		func(tab[i]);
}

#endif