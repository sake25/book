#include "BookList.h"
#include <iostream>
using namespace std;


BookList::BookList()
{
}


BookList::~BookList()
{
}

void BookList::inputList() {
	cout << "Nhap so luong sach: ";
	cin >> quantity;
	cin.ignore(1);
	cout << "Nhap sach di ne: \n";

	for (int i = 0; i < quantity; i++)
	{
		cout << "Nhap sach " << i + 1 << ":\n";
		list[i].inputBook();
	}
	
	cout << endl;
}

void BookList::outputList() {
	cout << "Danh sach sach hien co: \n";

	for (int i = 0; i < quantity; i++)
	{
		cout << "Sach " << i + i << endl;
		list[i].outputBook();
	}

	cout << endl;
}