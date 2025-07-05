#include<bits/stdc++.h>
using namespace std;

class Notification 
{
    public:
    
    virtual void sendNotification(const string &sendto, const string &message) = 0;
    virtual ~Notification() = default;
};

class Email : public Notification   // is-A
{
    public:
    
    void sendNotification(const string &sendto, const string &message) override
    {
        cout<<"Email send to : "<<sendto<<" and message is : "<<message<<endl;
    }
};


class SMS : public Notification // is-A
{
    public:
    
    void sendNotification(const string &sendto, const string &message) override
    {
        cout<<"SMS send to : "<<sendto<<" and message is : "<<message<<endl;
    }
};


class NotifyFactory 
{
    public:
    
    static Notification *createNotification(const string &type)  // factory-method :: hides obj creation detials from client
    {
        if(type == "email")   // created obj based on notification
        {
            return new Email();
        }
        else if(type == "SMS")
        {
            return new SMS();
        }
        else
        {
            return nullptr;
        }
    }
};

int main()
{
    Notification *emailnotifier = NotifyFactory::createNotification("email");
    if(emailnotifier)
    {
        emailnotifier->sendNotification("amananmol321@gmail.com","Welcome buddy");
        delete emailnotifier;
    }
    
    Notification *smsnotifier = NotifyFactory::createNotification("SMS");
    if(smsnotifier)
    {
        smsnotifier->sendNotification("SMS send to Amandeep ","Amazon parcel is delievered");
        delete smsnotifier;
    }
}
