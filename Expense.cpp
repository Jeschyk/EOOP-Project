#include "Expense.h"

Expense::Expense(string purpose, int amount)
{
	amount_ = amount;
	purpose_ = purpose;
}

Expense::~Expense()
{

}

int Expense::getAmount() const
{
	return amount_;
}

void Expense::printInfo() const
{
	cout << *this;
}

Expense &Expense::operator=(const Expense &nval)
{
    purpose_= nval.purpose_;
    amount_= nval.amount_;

	return *this;
}

ostream &operator<<(ostream &out, const Expense &expense)
{
	out << "Purpose of an expend: " << expense.purpose_ << endl;
	out << "Cost: " << expense.amount_ << endl;
	out << endl;
	return out;
}

bool operator==(const Expense &x, const Expense &y)
{
	return (x.amount_ == y.amount_);
}

bool operator<(const Expense &x, const Expense &y)
{
	return (x.amount_ < y.amount_);
}
