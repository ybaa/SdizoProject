#pragma once

using namespace std;

class Table
{

private:
	int numberOfElements;
	int *table;

public:
	Table();
	~Table();
	void setNumberOfElements(int);
	int getNumberOfElements();
	void showContent();
};
