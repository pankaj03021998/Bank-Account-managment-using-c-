#include <iostream>

using namespace std;
class person{
   private:
       string name;
       string account_no;
       long long balance;
       long long previousdepositamount;
       long long previouswithdrwalamount;
   public:
       person(string s,string acc,long long b)
       {
           name = s;
           account_no = acc;
           balance = b;
           previousdepositamount = 0;
           previouswithdrwalamount = 0;
       }
       void showaccountdetails()
       {
           cout<<endl<<endl;
           cout<<"--------------------Account Details-------------------\n\n";
           cout<<"Account holder Name   :\t"<<name<<endl;
           cout<<"Account No            :\t"<<account_no<<endl;
           cout<<"Available Balance     :\t"<<balance<<endl;
           cout<<"Last Deposit Amount   :\t"<<previousdepositamount<<endl;
           cout<<"Last Withdrawal Amount:\t"<<previouswithdrwalamount<<endl;
           cout<<"\n-------------------------------------------------\n\n\n";
       }
    void showbalance()
    {
        cout<<"Available balance = "<<balance<<endl;
    }
    void Deposit(long long addmoney)
    {
        balance += addmoney;
        previousdepositamount = addmoney;
        cout<<"Your money Deposited successfully :)\n";
    }
    void withdraw(long long submoney)
    {
        if(balance > submoney)
        {
            balance = balance - submoney;
            previouswithdrwalamount = submoney;
            cout<<"Your money withdrawal successfully :)\n";
        }
        else{
            cout<<"Balance is insufficient to make withdrawal your \n";
            showbalance();
        }
    }
};

int main()
{
    person p1("pankaj kumar","7091795390",0);
    while(1)
    {
        cout<<"(1).Account Details\n(2).ShowBalance\n(3).Deposit Money\n(4).Withdraw Money\n(5).Sign Out\n";
        int choice;
        cin>>choice;
        if(choice == 1)
        {
            p1.showaccountdetails();
        }
        else if(choice == 2)
            p1.showbalance();
        else if(choice == 3)
        {
            long long temp;
            cout<<"Enter amount to be deposited \n";
            cin>>temp;
            p1.Deposit(temp);
        }
        else if(choice == 4)
        {
            long long temp;
            cout<<"Enter amount to be withdrawal \n";
            cin>>temp;
            p1.withdraw(temp);
        }
        else if(choice == 5)
        {
            cout<<"Thank you for using our service\n";
            break;
        }
        else{
                cout<<":( ";
            cout<<"You have enter a incorrect input try again\n";
        }
    }

    return 0;
}
