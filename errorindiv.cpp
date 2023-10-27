//22070123114
//experiment=16-2
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a:"<<endl; //input the values
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
    
    try
    {
        if(b!=0) //exception case 1
        {
           c=a/b;
           cout<<"Division="<<c;  
        }
        else
        {
            throw b;
        }
    }
    catch(int e)
    {
        cout<<"Divided by "<<e<<"\nerror.";
    }
    
}