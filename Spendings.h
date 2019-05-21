#ifndef SPENDINGS_H
#define SPENDINGS_H

#include <iostream>
#include <vector>
#include "Expense.h"

using namespace std;

class Spendings
{
  public:
	Spendings();
	~Spendings();
	void addExpense(string purpose, int amount);
	void removeExpense(string purpose, int amount);
	int calculateTotal() const;
	int getNumberOfElements() const;
	Expense*& operator[](int index);
	Spendings& operator=(const Spendings &nval);
	friend ostream &operator<<(ostream &out, const Spendings &spendings);

  private:
  	vector <Expense*> tab;
};

#endif
