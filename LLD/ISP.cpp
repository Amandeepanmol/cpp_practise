ISP Violated
-------------

#include<bits/stdc++.h>
using namespace std;

class Shape 
{
    public:
    
    virtual void area() = 0;
    virtual void volume() = 0;
    
    virtual ~Shape() {}
};

class Square : public Shape
{
    public:
    int s;
    
    Square(int s) : s(s) {}
    
    void area() override 
    {
        cout<<"Area of the Sqaure is :"<<s*s<<endl;
    }
    
    void volume() override   //2d shape do not have volume   // isp violated
    {
        throw logic_error("Volume of Square is not possible");   
    }
};

class Cube :public Shape
{
    public:
    int c;
    
    Cube(int c) : c(c) {}
    
    void area() override
    {
        cout<<"Area of the cube is :"<<6*c*c<<endl;
    }
    
    void volume() override 
    {
        cout<<"Volume of the Cube is:"<<c*c*c<<endl;
    }
};


int main()
{
    Shape *sobj = new Square(5);
    Shape *cobj = new Cube(2);
    
    sobj->area();
    
    try 
    {
        cout<<"Square volume "<<endl;
        sobj->volume();
    }
    catch(logic_error &e)  // catch helps in catching the exception and prevent the code from forcefull closing
    {
        cout<<"Exception : "<<e.what()<<endl;
    }
    
    cobj->area();
    cobj->volume();
    
    delete sobj;
    delete cobj;
    
    return 0;
}
