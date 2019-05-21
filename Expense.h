#ifndef EXPENSE_H
#define EXPENSE_H

#include <iostream>
using namespace std;

class Expense
{
    friend class Spendings;
  public:
		Expense(string purpose, int amount);
		~Expense();
		int getAmount() const;
		void printInfo() const;
		friend ostream &operator<<(ostream &out, const Expense &f);
		friend bool operator==(const Expense &x, const Expense &y);
		friend bool operator<(const Expense &x, const Expense &y);
		Expense &operator=(const Expense &nval);
  private:
  	int amount_;
    string purpose_;
};

#endif
