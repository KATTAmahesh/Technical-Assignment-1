#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
//Returns the  value of sum of the squares  of first n natural numbers 
int square(int in)
{
int ia;
ia= (in*(in+1)*(2*in+1))/6;
cout<<"output"<<ia<<endl;
}
int main(int argc,char*argv[])
{
int iaa;
   if(argc == 2 && strcmp(argv[1], "--help")==0)
   {
    cout<<"Main purpose of this program is to give the size and type of the given value"<<endl;
   }
else
{
   cin>>iaa;
   square(iaa);
}
}
