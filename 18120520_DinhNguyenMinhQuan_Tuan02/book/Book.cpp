#include "Book.h"
#include <iostream>

Book::Book() : name(""), genre(""), seri(0)
{

}


Book::~Book()
{

}

string Book::getName() {
	return this->name;
}

string Book::getGenre() {
	return this->genre;
}

int Book::getSeri() {
	return this->seri;
}

void Book::setName(string name) {
	this->name = name;
}

void Book::setGenre(string genre) {
	this->genre = genre;
}

void Book::setSeri(int seri) {
	this->seri = seri;
}

void Book::inputBook() {
	string tempStr;
	int tempInt;

	cout << "Nhap ten sach: ";
	getline(cin, tempStr);
	this->setName(tempStr);

	cout << "Nhap the loai sach: ";
	getline(cin, tempStr);
	this->setGenre(tempStr);

	cout << "Nhap seri sach: ";
	cin >> tempInt;
	this->setSeri(tempInt);
	cin.ignore(1);
}

void Book::outputBook() {
	cout << "Ten: " << this->getName() << endl;
	cout << "The loai: " << this->getGenre() <<  endl;
	cout << "Seri: " << this->getSeri() <<  endl;
}
