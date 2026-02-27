
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{

	private:
		unsigned int _size;
		T* _data;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &val);
		~Array();

		Array& operator=(const Array &other);

		unsigned int getSize() const;
		T& operator[](size_t _data);
		const T& operator[](size_t _data) const;

};

#endif