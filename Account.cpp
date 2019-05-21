#include "Account.h"

Account::Account(int initialState)
{
money_ = initialState;
}

Account::~Account()
{

}

int Account::getAccountState() const
{
	return money_;
}

void Account::addMoney(const int money)
{
	money_ += money;
}

void Account::spendMoney(const int money)
{
	money_ -= money;
}

void Account::spendMoney(const Spendings& spendings)
{
	int amount = spendings.calculateTotal();
	spendMoney(amount);
}

ostream& operator<<(ostream &out, const Account &account)
{
	out << account.money_ << endl;
	return out;
}
