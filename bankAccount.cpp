#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class BankAccount
{
private:
    string name;
    int accountNumber;
    float balance;
public:
    BankAccount(string n, int a, float b)
    {
        this->name = n;
        this->accountNumber = a;
        this->balance = b;
    }

    void deposit(float amount)
    {
        balance +=amount;
    }
    void withdraw(float amount)
    {
        if(balance >= amount)
        {
            balance -=amount;
        }
        else
        {
            cout<<"Insufficient funds"<<endl;
        }
    }
    void display()
    {
        cout << fixed << setprecision(2);
        cout<<"Acc Name: "<<name<<endl;
        cout<<"Acc Number: "<<accountNumber<<endl;
        cout<<"Acc Balance: "<<balance<<endl;

    }

};


int main()
{
    BankAccount ib ("Tanjim Ahamed", 7484, 1000000);
    ib.display();
    ib.deposit(46000);
    ib.withdraw(2000);
    cout << "\nAfter transactions:" << endl;
    ib.display();


    return 0;
}
