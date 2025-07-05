#include<bits/stdc++.h>
using namespace std;

class Troop 
{
    public:
    
    string troopName;
    int damage;
    int health;
    
    Troop(string troopName, int health, int damage) : troopName(troopName), damage(damage), health(health) {}
    
    virtual void damageCaused() = 0;
    virtual void move() = 0;
    
    virtual ~Troop() = default;
};

class Barbarian : public Troop 
{
    public:
    
    Barbarian():Troop("Barbarian", 200 , 280) {}
    
    void damageCaused() override 
    {
        cout<<"Barbarian uses sword to give a damage : "<<damage<< " and have a health of "<<health<<endl;
    }
    
    void move() override 
    {
        cout<<"Barbarian move slow"<<endl;
    }
};


class Wizard : public Troop 
{
    public:
    
    Wizard():Troop("Wizard", 150, 200) {}
    
    void damageCaused() override 
    {
        cout<<"Wizard provide damage through fire balls :"<<damage<<" and health is : "<<health<<endl;
    }
    
    void move() override 
    {
        cout<<"Wizard move fast"<<endl;
    }
};

class TroopFactory // factory design pattern
{
   public:
   enum class TroopType
   {
       Barbarian,
       Wizard        // further charcter like skeleton army, goblins , archer can be added
   };
   
   static Troop *createTroop(TroopType type)
   {
       switch(type)
       {
           case TroopType::Barbarian:
                return new Barbarian();
                
           case TroopType::Wizard:
                return new Wizard();
           default:
                return nullptr;
        
       }
   }
};


int main()
{
  
    Troop *wiz = TroopFactory::createTroop(TroopFactory::TroopType::Wizard);  // enum of wizard passed
    
    if(wiz)
    {
        wiz->damageCaused();
        wiz->move();
        delete wiz;
    }
}
