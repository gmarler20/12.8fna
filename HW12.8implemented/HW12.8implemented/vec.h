#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

template <typename T>
class vec
{
public:
	vec<T>();

	vec<T>(int size);
	vec<T>(int size, T specifiedvalue[]);
	void push_back <T>(T value);

	void pop_back <T>();
	unsigned const int size();

	const <T> at(int index);

	bool const <T> empty();

	void clear();

	void <T> swap(vec& v2);
private:
	T * specified = 10;
	T elements;
	int vsize;
};


