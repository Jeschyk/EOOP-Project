#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Spendings.h"

class Account
{
public:
	Account(int initialState);
	~Account();
	int getAccountState() const;
	void addMoney(const int money);
	void spendMoney(const int money);
	void spendMoney(const Spendings& spendings);
	friend ostream& operator<<(ostream &out, const Account &account);
	Account& operator=(const Account &nval);
private:
	int money_;
};

#endif
