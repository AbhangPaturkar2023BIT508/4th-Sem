/*
Q7. WAP of bank class with following details 
    1. Customer name, Account no. Bank name, account type, balance 
    2. Operations
    2.1 get customer data
    2.2 print customer data
    2.3 debit given amount If balance is more than 2000
    2.4 credit given amount
    2.5 show balance
*/

#include<iostream>
using namespace std;

class Bank
{
    private:
        long AccNo = 0;
        char CustName[50] = "NULL";
        char BankName[50] = "NULL";
        char AccType[20] = "NULL";
        float balance = 0;
        float amt = 0;
    
    public:
        void getData();
        void printData();
        void creditAmt();
        void debitAmt();
};

void Bank :: getData()
{
    cout<<"Enter Bank Name      : ";
    cin>>BankName;
    cout<<"Enter Customer Name  : ";
    cin>>CustName;
    cout<<"Enter Account Number : ";
    cin>>AccNo;
    cout<<"Enter Account Type   : ";
    cin>>AccType;
    cout<<"Enter Amount         : ";
    cin>>balance;
    cout<<"\nAccount Created Successfully"<<endl;
}

void Bank :: printData()
{
    cout<<"\nBank Name            : "<<BankName<<endl;
    cout<<"Customer Name        : "<<CustName<<endl;
    cout<<"Account Number       : "<<AccNo<<endl;
    cout<<"Account Type         : "<<AccType<<endl;
    cout<<"Available Balance    : "<<balance<<endl;
}

void Bank :: creditAmt()
{
    long AcNo;

    cout<<"\nEnter Your Account Number    : ";
    cin>>AcNo;
    if(AccNo == AcNo)
    {
        cout<<"Enter Amount to Credit       : ";
        cin>>amt;
        if(amt > 0)
        {
            balance += amt;
            cout<<"Amount Credited Successfully..."<<endl;
            cout<<"Available Balance : "<<balance<<endl;
            amt = 0;
        }
        else
        {
            cout<<"Please Enter Valid Amount";
        }
    }
    else
    {
        cout<<"Account Number Not Match..!!";
    }
}

void Bank :: debitAmt()
{
    long AcNo;

    cout<<"\nEnter Your Account Number    : ";
    cin>>AcNo;
    if(AccNo == AcNo)
    {
        cout<<"Enter Amount to Debit : ";
        cin>>amt;
        if(amt > 0 && amt < balance - 2000)
        {
            balance -= amt;
            cout<<"Amount Debited Successfully..."<<endl;
            cout<<"Available Balance : "<<balance<<endl;
            amt = 0;
        }
        else
        {
            if(amt < 0)
            {
                cout<<"Please Enter Valid Amount"<<endl;
            }
            else
            {
                cout<<"Insufficient Balance to Debit"<<endl;
            }
        }
    }
    else
    {
        cout<<"Account Number Not Match..!!";
    }
}

int main()
{
    Bank obj;
    int choice;

    do
    {
        cout<<"\n1.Create Account\n2.Display Details\n3.Credit Amount\n4.Debit Amount\n5.Exit\n\tEnter Your Choise : ";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                obj.getData();
                break;
            case 2 :
                obj.printData();
                break;
            case 3 :
                obj.creditAmt();
                break;
            case 4 :
                obj.debitAmt();
                break;
            case 5 :
                break;
            default : 
                cout<<"Enter Valid Choice...!"<<endl;
        }
    }while(choice!=5);
}