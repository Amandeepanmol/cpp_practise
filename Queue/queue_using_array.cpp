#include<bits/stdc++.h>
using namespace std;
#define n 100

class Queue
{
    int* arr;
    int front;
    int rear;

    public:
    Queue()
    {
        front=-1;
        rear=-1;
        arr=new int[n];
    }

    
    void enqueue(int x)
    {
        if(rear==n-1)
        {
            cout<<"Queue is overflow"<<endl;
        }
        
        rear++;
        arr[rear]=x;

        if(front==-1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if(front==-1 || front>rear)
        {
            cout<<"Queue is empty"<<endl;
        }

        front++;
    }
    
    void display()
    {
        if(front==rear)
        {
            cout<<"Queue is empty\n";
        }
        
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i];
            if(i<rear)
            {
                cout<<"-->";
            }
        }
        cout<<endl;
    }
    int peek()
    {
        if(front==-1)
        {
            cout<<"No element "<<endl;
            return -1;
        }

        return arr[front];
    }

    bool empty()           //checking for queue is empty or not
    {
        if(front==-1 || front>rear)
        {
            return true;   //when queue is empty
        }
        return false;
    }
    
  
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(11);
    q.enqueue(89);
    q.enqueue(80);
    
    q.display();

    cout<<q.peek()<<endl;    // it gives element at front position
    q.dequeue();      //remove element
    
    q.display();      // display the queue
    cout<<q.peek()<<endl;
    
    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    cout<<q.empty()<<endl;
}



OUTPUT:
PS C:\Users\hp\Desktop\cpp1\Queue> cd "c:\Users\hp\Desktop\cpp1\Queue\" ; if ($?) { g++ queue_using_array.cpp -o queue_using_array } ; if ($?) { .\queue_using_array }
1-->11-->89-->80
1
11-->89-->80
11
1
