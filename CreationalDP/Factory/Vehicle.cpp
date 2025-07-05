#include<bits/stdc++.h>
using namespace std;

class Vehicle 
{
    public:
    
    virtual void startEngine() = 0;
    virtual ~Vehicle() = default;
};

class Car : public Vehicle
{
    public:
    
    void startEngine() override 
    {
        cout<<"Car engine started"<<endl;
    }
};

class Bike : public Vehicle 
{
    public:
    
    void startEngine() override
    {
        cout<<"Bike engine started"<<endl;
    }
};

class VehicleFactory 
{
    public:
    static Vehicle *createVehicleObj(const string str)  // can be normal fn also; then needed to create Class's obj and then call form main()
    {
        if(str == "Car")
        {
            return new Car();
        }
        
        else if(str == "Bike")
        {
            return new Bike();
        }
        
        else
        {
            return nullptr;
        }
    }
};

int main()
{
    Vehicle *car = VehicleFactory::createVehicleObj("Car");
    Vehicle *bike = VehicleFactory::createVehicleObj("Bike");
    
    if(car != nullptr)
    {
        car->startEngine();
        delete car;
    }
    
    if(bike != nullptr)
    {
        bike->startEngine();
        delete bike;
    }
}
