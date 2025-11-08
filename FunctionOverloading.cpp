#include<iostream>
using namespace std;
class Demo
{
    public:
//overloading by changing number of parameters
//fun@2ii
    void fun(int i,int j)     //fun(11,21)
    {}
//fun@3iii    
    void fun(int i,int j,int k)
    {} 
//overloading by changing sequence of parameters
//gun@2id
    void gun(int i,double d)
    {}
//gun@2di     
    void gun(double d,int i)
    {}
//overloading by changing datatypes of parameters
//sun@2cc
void sun(char ch1,char ch2) 
{} 
//sun@2ff
void sun(float f1,float f2)
{} 
/*
we can not overload by changing return type
// run@2ii
int run(int i,int j)
{}
//run@2ii
float run(int i,int j)
{}


*/

};
int main()
{

    return 0;
}