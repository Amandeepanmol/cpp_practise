OCP violated

#include<bits/stdc++.h>
using namespace std;

enum class PaymentType
{
    GPay,
    Paytm,
    Slice
};

class Payment 
{
    public:
    
    void pay(PaymentType pay)
    {
        if(pay == PaymentType::GPay)
        {
            cout<<"Paying via GPay"<<endl;
        }
        else if(pay == PaymentType::Paytm)
        {
            cout<<"Paying via Paytm"<<endl;
        }
        else
        {
            cout<<"Paying via Slice"<<endl;
        }
    }
};

int main()
{
    Payment p;
    p.pay(PaymentType::GPay);
    p.pay(PaymentType::Paytm);
    p.pay(PaymentType::Slice);
}
