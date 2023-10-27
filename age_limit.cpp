//22070123114
//experiment-16
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age:"<<endl; //input the age
    cin>>age;
   
    try
    {
        if(age>=18)
        {
           cout<<"You are old enough to login";  //print whether the user is legally eligible to login.
        }
        else
        {
            throw age;
        }
    }
    catch(int e)
    {
        cout<<"Your age is "<<e<<"\n Access denied";
    }
    
}