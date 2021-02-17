#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
    string s2;
    string s3;
    
    getline(cin,s1);
    getline(cin,s2);
    
    int a=s1.length();
    int b=s2.length();
    
    cout<<a<<" "<<b;
    cout<<endl;
    s3=s1+s2;
    cout<<s3<<endl;
    
    char temp1=s1[0];
    s1[0]=s2[0];
    s2[0]=temp1;
    
    cout<<s1<<" "<<s2;
    
   
    
    return 0;
}
