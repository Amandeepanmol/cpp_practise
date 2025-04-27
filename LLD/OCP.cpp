OCP violation
------------------

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


//////////////////////////////////////////////////////////////////////////////////////////////

OCP Preserved
-------------

#include<bits/stdc++.h>
using namespace std;

class IPayment 
{
    public:
    virtual void pay() = 0;
    virtual ~IPayment() = default;
};

class GPay : public IPayment
{
    public:
    void pay()
    {
        cout<<"Paying through GPay"<<endl;
    }
};

class Paytm : public IPayment 
{
    public:
    void pay()
    {
        cout<<"Paying through Paytm"<<endl;
    }
};

class Slice : public IPayment 
{
    public:
    void pay()
    {
        cout<<"Paying through Slice"<<endl;
    }
};


class PaymentProcess 
{
    public:
    void paymentMethod(IPayment &obj)
    {
        obj.pay();
    }
};

int main()
{
    PaymentProcess p;
    
    Slice s;
    p.paymentMethod(s);
}

int main()
{
    Payment p;
    p.pay(PaymentType::GPay);
    p.pay(PaymentType::Paytm);
    p.pay(PaymentType::Slice);
}

Now, you can create any payment type and add the class for it without breaking the system.
