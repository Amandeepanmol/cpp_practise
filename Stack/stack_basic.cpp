#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(89);
    s.push(90);
    s.push(98);
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;


    s.push(87);
    cout<<s.size()<<endl;

    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
