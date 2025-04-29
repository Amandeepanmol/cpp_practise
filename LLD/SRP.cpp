SRP Violtaed
-------------
  #include<bits/stdc++.h>
using namespace std;

class Employee
{
    private:
    int id;
    string name;
    
    public:
    Employee(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    
    void getDetails()
    {
        cout<<"Emp name is : "<<name<<" and id is : "<<id<<endl;
    }
    
    void saveToDb()
    {
        cout<<"Employee details saved"<<endl;
    }
};


int main()
{
    Employee e(2,"Prateek");
    e.getDetails();
    e.saveToDb();
}





/////////////////////////////////////////////////////////////////////////////////////////////////////////

SRP Preserved
---------------

#include<bits/stdc++.h>
using namespace std;

class Employee
{
    private:
    string id;
    string name;
    
    public:
    Employee(string name, string id)
    {
        this->id = id;
        this->name = name;
    }
    
    string getDetails()
    {
        return "Name : " + name + " , id : " + id;
    }
    
};

class EmplyeeDb
{
    public:
    void saveToDb(Employee ob)
    {
        cout<<"Details saved to db : "<<ob.getDetails()<<endl;
    }
};

int main()
{
    Employee e("Prateek","s101");
    Employee ee("Honey","s102");
    
    EmplyeeDb db;
    db.saveToDb(e);
    db.saveToDb(ee);
}
