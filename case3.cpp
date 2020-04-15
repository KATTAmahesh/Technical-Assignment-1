#include<iostream>
#include<string.h>
#include<typeinfo>
using namespace std;
unsigned iNum=75;    
signed int iNum1=90; 
void test_function_storage()
{
    auto Auto_Num="NEW";   
    long double fCount;         
    cout<<"Enter the double value:";
    cin>>fCount;
    static int iStatic_Num;    
    register int iRegister_Num;    
    cout<<"Enter the Register variable:";
    cin>>iRegister_Num;
    iStatic_Num=iStatic_Num+iRegister_Num*2;
    for(int iStart=0;iStart<fCount;iStart++)
    {
        iStatic_Num++;
    }
    cout<<endl;
    cout<<"Global Variables:"<<endl;
    cout<<"Global   = "<<iNum<<" "<<"Size:"<<sizeof(iNum)<<endl;
    cout<<"Second Global Variable = "<<iNum1<<" "<<"Size:"<<sizeof(iNum1)<<endl;
    cout<<endl;
    cout<<"Storage classes"<<endl;
    cout<<"Static   = "<<iStatic_Num<<" "<<"Size:"<<sizeof(iStatic_Num)<<endl;
    cout<<"Register = "<<iRegister_Num<<" "<<"Size:"<<sizeof(iRegister_Num)<<endl;
    cout<<"Auto = "<<Auto_Num<<'\t'<<"Type ="<<typeid(Auto_Num).name()<<endl;
    cout<<"Double Value:"<<fCount<<" "<<"Size of Double:"<<sizeof(fCount)<<endl;
    cout<<endl;
}
void type_modifiers()
{
    unsigned iNum;  
    cout<<"Enter a unsigned Number:";
    cin>>iNum;
    signed int iNum1;
    cout<<"Enter signed number:";
    cin>>iNum1;
    test_function_storage();
    cout<<endl;
    cout<<"Local variables"<<endl;
    cout<<"Global Variable "<<iNum<<" "<<"Size:"<<sizeof(iNum)<<endl;
    cout<<"Second Global Variable "<<iNum1<<" "<<"Size:"<<sizeof(iNum1)<<endl;
    cout<<endl;
}

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     
        {
            cout<<"different values mentioned and observe the output"<<endl;
        }
    }
    else
    {
        test_function_storage();
        type_modifiers();
    }
    return 0;
}