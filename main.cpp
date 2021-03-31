#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cmath>
using namespace std;

class account
{
private:
     int ac_no,ifsc,time,rate,period;
     char name[10];
     float bal,amount,ci;
public:
    void setname(char* n) //Using setter Function
    {
        strcpy(name,n);
    }
    void setbalance(float b)//Using Setter Function
    {
        bal=b;
    }
    void setifsc(int code)//using setter function
    {
        ifsc=code;
    }
    void setAccno(int a_no)//using setter function
    {
        ac_no=a_no;
    }
    void display()
    {
        cout<<"The name of the Account Holder : "<<name<<endl;
        cout<<"Customer's Account Number: "<<ac_no<<endl;
        cout<<"IFSC Code of the respective Branch : "<<ifsc<<endl;
        cout<<"Available Balance : "<<bal<<endl;
    }
    void withdraw(float am)
    {
        bal-=am;
    }
    void deposit(float am)
    {
        bal+=am;
    }
    void interest(int r, int t, int p)
    {
        ci=bal*pow((1+r/p),p*t);
        amount+=ci;
    }
    void msg()
    {
        if(bal<20)
            cout<<"Insufficient Balance In your Account"<<endl;
        else
            cout<<"Proceed"<<endl;
    }
    float getwithdraw()//using getter function
    {
        return bal;
    }
    float getdeposit()//using getter function
    {
        return bal;
    }
    int getaccountnumber()//using getter function
    {
        return ac_no;
    }
    int getifsc()//using getter function
    {
        return ifsc;
    }
};
int main()
{
    account p1;
    p1.setname("AJAY");
    p1.setbalance(4768.65);
    p1.setifsc(698);
    p1.setAccno(34678);
    p1.withdraw(479.67);
    p1.deposit(329.48);
    p1.interest(2,1,3);
    p1.msg();
    p1.getwithdraw();
    p1.getdeposit();
    p1.getaccountnumber();
    p1.getifsc();
    p1.display();
}
