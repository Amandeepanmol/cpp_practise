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


************************************************************************************************************************************************************

ISP Preserved 
---------------

    #include<bits/stdc++.h>
using namespace std;

class TwoDShape   // seperate interface for 2d
{
    public:
    
    virtual void area() = 0;

};

class ThreeDShape   // seperate interface for 3d
{
    public:
    
    virtual void area() =  0;
    virtual void volume() = 0;

};

class Square : public TwoDShape
{
    public:
    int s;
    
    Square(int s) : s(s) {}
    
    void area() override 
    {
        cout<<"Area of the Sqaure is :"<<s*s<<endl;
    }
};

class Cube :public ThreeDShape
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
    TwoDShape *sq = new Square(8);
    ThreeDShape *cu = new Cube(2);
    
    sq->area();
    cu->area();
    cu->volume();
    
    delete sq;
    delete cu;
}
