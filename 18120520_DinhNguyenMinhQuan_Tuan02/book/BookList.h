#pragma once
#include "Book.h"

class BookList
{
private:
	Book list[100];
	int quantity;
public:
	BookList();
	~BookList();
	void inputList();
	void outputList();
};

