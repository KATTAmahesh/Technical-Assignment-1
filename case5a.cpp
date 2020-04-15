#include<iostream>
#include<string.h>
using namespace std;
class Test
{
private:
    int iNum1;
    float fNum2;
public:
    Test()
    {
        cout<<"Default Constructor is Invoked"<<endl;
        iNum1=100;
        fNum2=200;
    }
    Test(int iX,float fY)
    {
        cout<<"Parameterized Constructor Invoked"<<endl;
        iNum1=iX;
        fNum2=fY;
    }

/*Function Name :get()
  Parameters    :no parameter
  Return Type   :no return type
  Usage         :to take the input of private members*/

    void get()
    {
        cout<<"Using Member Function"<<endl;
        cout<<"Enter Number 1:";
        cin>>iNum1;
        cout<<"Enter Number 2:";
        cin>>fNum2;
    }

/*Function Name :display()
  Parameters    :no parameter
  Return Type   :no return type
  Usage         :to display the private members*/

    void display()
    {
        cout<<"Number 1:"<<iNum1<<endl;
        cout<<"Number 2:"<<fNum2<<endl;
        cout<<endl;
    }
    friend class Test1;
    friend void getinput(Test T);
};

class Test1
{
public:
/*Function Name :getinput1
  Parameters    :Test class object
  Return Type   :no return type
  Usage         :to take the input of private members*/
    void getinput1(Test T)
    {
        cout<<"Using Friend Class"<<endl;
        cout<<"Enter Number 1:";
        cin>>T.iNum1;  //input to Test object variable
        cout<<"Enter Number 2:";
        cin>>T.fNum2;
        cout<<"Number 1:"<<T.iNum1<<endl<<"Number 2:"<<T.fNum2<<endl;
        cout<<endl;
    }
};

/*Function Name :getinput
  Parameters    :Test class object
  Return Type   :no return type
  Usage         :to take the input of private members*/

void getinput(Test T)
{
    cout<<"Using Friend Function"<<endl;
    cout<<"Enter Number 1:";
    cin>>T.iNum1;
    cout<<"Enter Number 2:";
    cin>>T.fNum2;
    cout<<"Number 1:"<<T.iNum1<<endl<<"Number 2:"<<T.fNum2<<endl;
    cout<<endl;
}

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     //created a help command
        {
            cout<<"Just pass the values of two variables int and float"<<endl;
        }
    }
    else
    {
        Test ob;    
        ob.display();
        Test ob1(40,20.20f);    //passing arguments
        ob1.display();
        getinput(ob);
        ob.get();
        ob.display();
        Test1 T1;
        T1.getinput1(ob);
    }
    return 0;
}


