#include "stdafx.h"
#include "vec.h"

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

template <typename T>
{
public:
	vec<T>() {
		T elements;
	};

	vec<T>(int size) {
		T vec1[size];
		for (int i = 0; i < size; i++)
			elements = i++;
	}

	vec<T>(int size, T specifiedvalue[])
	{
		T vec1[size];
		for (int a = 0; a < size; a++)
			elements[i] = specifiedvalue[i];
	}

	void vec::push_back <T>(T value)
	{
		elements[vsize + 1] = value;
	}

	void vec::pop_back <T>()
	{
		elements[vsize] = elements[vsize - 1];
	}

	unsigned const int vec::size() {
		return vsize;
	}

	const <T> vec::at(int index)
	{
		return elements[index];
	}

	bool const <T> vec::empty()
	{
		if (vsize == 0)
			return true;
	}

	void vec::clear() {
		vsize = 0;
	}

	void <T> vec::swap(vec& v2) {
		for (int i = 0; i < size; i++)
			<T> temp[i] = v2[i];

		for (int a = 0; a < size; a++)
			v2[i] = elements[i];

		for (int j = 0; j < size; j++)
			v2[i] = temp[i];

	}

