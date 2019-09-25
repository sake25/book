#pragma once
#include <string>
using namespace std;

class Book
{
private:
	string name; 
	string genre;
	int seri;
public:
	Book();
	~Book();
	string getName();
	string getGenre();
	int getSeri();
	void setName(string name);
	void setGenre(string genre);
	void setSeri(int seri);
	void inputBook();
	void outputBook();
};

