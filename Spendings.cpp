#include "Spendings.h"

Spendings::Spendings()
{

}

Spendings::~Spendings()
{
    for(unsigned i = 0; i < tab.size(); i++)
    {
        delete tab[i];
    }
}


void Spendings::addExpense(string purpose, int amount)
{
    Expense* w = new Expense(purpose, amount);
    tab.push_back(w);
}

void Spendings::removeExpense(string purpose, int amount)
{
    for(unsigned i = 0; i < tab.size(); i++)
    {
        Expense* p = tab[i];
        if((p->purpose_ == purpose) && (p->amount_ == amount))
        {
            tab.erase(tab.begin() + i);
            delete p;
            break;
        }
    }
}

int Spendings::calculateTotal() const
{
    int sum = 0;
    for(unsigned int i = 0; i < tab.size(); i++)
    {
        sum += tab[i]->getAmount();
    }
    return sum;
}

int Spendings::getNumberOfElements() const
{
    return tab.size();
}

Expense*& Spendings::operator[](int index)
{
    return tab[index];
}

Spendings& Spendings::operator=(const Spendings& nval)
{
    tab.clear();
    for(int i = 0; i < nval.getNumberOfElements(); i++)
    {
        tab.push_back(nval.tab[i]);
    }
    return *this;
}

ostream& operator<<(ostream &out, const Spendings &spendings)
{
    for(unsigned int i = 0; i < spendings.tab.size(); i++)
    {
        out << *spendings.tab[i];
    }
    return out;
}
