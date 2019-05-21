#include "Spendings.h"
#include "Account.h"

int main()
{
    int z,n,x,a,i,e;
    string purpose;
    int amount;

    cout<<"SPENDING REGISTER AND ANALYSER"<<endl;
    cout<<endl;
    cout<<"Insert the account balance:"<<endl;
    cin>>x;

    Spendings spendings;
    spendings.addExpense("Car", 7500);
    spendings.addExpense("TV", 3000);
    spendings.addExpense("PC", 4500);
    spendings.addExpense("Play Station", 1500);
    spendings.addExpense("Smartphone", 2000);
    cout<<endl;
    cout<<"Insert the number of expanses:"<<endl;
    cin>>a;

    for(i=0; i<a; i++)
    {
        cout<<"Insert the purpose and the amount for an expanse:"<<endl;
        cin>>purpose;
        cin>>amount;
        spendings.addExpense(purpose, amount);
    }


    bool backk = true;

    while (true)
    {

        cout<<endl;
        cout<<"MENU:"<<endl;
        cout<<endl;
        cout<<"1. Add expenses"<<endl;
        cout<<"2. Delete expenses"<<endl;
        cout<<"3. All expenses"<<endl;
        cout<<"4. Account balance"<<endl;
        cout<<"5. Number of expenses"<<endl;
        cout<<"6. Expanses higher than"<<endl;
        cout<<"7. Expanses lower than"<<endl;
        cout<<"8. Expanses equal to"<<endl;
        cout<<"9. Sorted expenses (from highest cost to lowest cost)"<<endl;
        cout<<endl;
        cout<<"   QUIT-> any other button"<<endl;

        int y;
        Account account(x);

        cin>>y;

        if (y==1)
        {
            cout<<endl;
            cout << spendings;
            cout<<endl;
            cout<<"Insert the number of expanses:"<<endl;
            cin>>a;

            for(i=0; i<a; i++)
            {
                cout<<"Insert the purpose and the amount for an expanse:"<<endl;
                cin>>purpose;
                cin>>amount;
                spendings.addExpense(purpose, amount);
            }

            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }

        }
        else if (y==2)
        {
            cout<<endl;
            cout << spendings;
            cout<<endl;
            cout<<"Insert the number of expanses:"<<endl;
            cin>>a;

            for(i=0; i<a; i++)
            {
                cout<<"Insert the purpose and the amount for an expanse:"<<endl;
                cin>>purpose;
                cin>>amount;
                spendings.removeExpense(purpose, amount);
            }

            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }
        }
        else if (y==3)
        {
            cout << spendings;

            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }

        }
        else if (y==4)
        {
            cout << "Account Balance (before): ";
            cout << account;
            cout << endl;
            cout << "Sum of expanses: " << spendings.calculateTotal() << endl;
            cout << endl;
            account.spendMoney(spendings);
            cout << "Account Balance (after): ";
            cout << account;
            cout << endl;
            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }
        }
        else if (y==5)
        {
            cout << endl;
            cout << "Number of elements: " << spendings.getNumberOfElements() << endl;
            cout << endl;
            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }
        }
        else if (y==6)
        {
            cout << endl;
            cout<<"Insert the value:"<<endl;
            cin>>e;
            n=spendings.getNumberOfElements();
            Expense exp("Random Staff", e);
            for(i=0; i<n; i++)
            {
                if (exp<*spendings[i])
                    cout<< *spendings[i] <<endl;
            }
            cout << endl;
            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }
        }
        else if (y==7)
        {
            cout << endl;
            cout<<"Insert the value:"<<endl;
            cin>>e;

            n=spendings.getNumberOfElements();

            Expense exp("Random Staff", e);

            for(i=0; i<n; i++)
            {
                if (*spendings[i]<exp)
                    cout<< *spendings[i] <<endl;
            }
            cout << endl;
            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }
        }
        else if (y==8)
        {
            cout << endl;
            cout<<"Insert the value:"<<endl;
            cin>>e;
            n=spendings.getNumberOfElements();
            Expense exp("Random Staff", e);
            for(i=0; i<n; i++)
            {
                if (exp==*spendings[i])
                    cout<< *spendings[i]<<endl;
            }
            cout << endl;
            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }
        }
        else if (y==9)
        {
            n=spendings.getNumberOfElements();

            for(int i =0; i< n; i++)
            {
                for(int j = i+1; j<n; j++)
                {
                    if(*spendings[i]< *spendings[j])
                    {
                        Expense *tmp = spendings[i];
                        spendings[i]= spendings[j];
                        spendings[j] = tmp;
                    }
                }

            }

            for (i=0; i<n; i++)
            {
                cout << *spendings[i] << endl;
            }

            cout<<"9. Go back"<<endl;

            cin>>z;

            if(z!=9)
            {
                break;
            }
        }
        else
        {
          break;
        }
    }
    return 0;
}
