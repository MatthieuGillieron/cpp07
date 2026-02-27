
#include "Array.hpp"

// === CANONICAL FORM ===

template <typename T>
Array<T>::Array() : _size(0), _data(NULL)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_data = new T[_size];
}

template <typename T>
Array<T>::Array(const Array& val) : _size(val._size), _data(NULL)
{
	_data() = new T(_size)

	for (int i = 0; i < _size; i++)
		_data[i] = val._data[i];

}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		delete[] _data;
		_size = other._size;
		_data = new T[_data];

		for (unsigned int i = 0; i < _size; i++;)
			_data[i] = _size[i];
			
		return *this;
	}
}


// === GETTER === 


// === METHODE ===