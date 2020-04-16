#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Employee{
private:
    int *iRoll_no;
    char cName[20];
public:
    Employee()
    {
        cout<<"Default Constructor"<<endl;
    }
    Employee(int *i_no,char *cname)
    {
        cout<<"Parameterized Constructor"<<endl;
        iRoll_no=i_no;
        strcpy(cName,cname);
    }

/*Function Name :Assign_Value
  Parameters    :no,name
  Return Type   :no return type
  Usage         :to assign value to private variables*/

    void Assign_Value(int *ino,char cname[])
    {
        iRoll_no=ino;
        strcpy(cName,cname);
    }

/*Function Name :display
  Parameters    :no parameters
  Return Type   :no return type
  Usage         :to display private variables*/

    void display()
    {
        cout<<"RollNo:"<<*iRoll_no<<endl<<"Name:"<<cName<<endl;
        cout<<endl;
    }

    void operator ++()  //increment operator overloading
    {
        ++(*iRoll_no);
    }
    ~Employee()
    {
        cout<<"Destructor is Invoked"<<endl;
    }
};

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     //created a help command
        {
            cout<<"display private variable int* and char[20]"<<endl;
        }
    }
    else
    {
        Employee obj;
        int iVal;
        char cNum[20];
        cout<<"Enter Employee RollNo:";
        cin>>iVal;
        cout<<"Enter Name of Employee:";
        getchar();
        cin.get(cNum,100,'\n');
        cout<<endl<<"Using Parameterized Constructor"<<endl;
        Employee obj2(&iVal,cNum);   //parameterized constructor
        obj2.display();
        cout<<"After Operator Overloading"<<endl;
        ++obj2;     //calling of increment operator overloading
        cout<<"Using Member Function"<<endl;
        obj.Assign_Value(&iVal,cNum);    //calling of member function
        obj.display();
    }
    return 0;
}


