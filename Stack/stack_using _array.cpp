#include<bits/stdc++.h>
using namespace std;
#define capacity 100
int s[capacity],top=-1;

bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int value)
{
    if(top==capacity-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else                             //insertion of element
    {
       top++;
       s[top]=value;
    }
    
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {              //deletion of element
       top--;
    }
    
}


void display()
{
    if(isempty())
    {
        cout<<"Stack is empty"<<endl;
    }

    for(int i=0;i<=top;i++)
    {
        cout<<s[i]<<" ";                 

        
    }
}

void top_element()
{
    if(isempty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Top element is : "<<s[top]<<endl;
    } 
}

int main()
{
    int choice, flag=1, value;
    while(flag==1)
    {
        cout<<"\n1.PUSH 2.POP 3.DISPLAY 4.SHOW_TOP 5.EXIT\n";
        cin>>choice;
        switch (choice)
        {
        case 1: cout<<"Enter Value:\n";
                cin>>value;
                push(value);
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: top_element();
                break;
        case 5: flag = 0;
                break;
        }
    }
return 0;
}
