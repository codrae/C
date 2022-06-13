#include"calculator.h"
#include<iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Divide.h"

using namespace std;

void Calculator::input(){
    cin >> num1 >> op >> num2;

    if(op == '+')
    iop = (IOperator*)new Add();
    else if(op == '-')
    iop = (IOperator*)new Sub();
    else if(op == '*')
    iop = (IOperator*)new Mul();
    else if(op == '/')
    iop = (IOperator*)new Divide();
}

void Calculator::output(){
    cout << res << endl;

}

void Calculator::calculate(){
  
   res = iop -> op(num1,num2); 
   delete iop;
}

void Calculator::add() 
{
    res = num1 + num2;
}
void Calculator:: sub() 
{
    res = num1 - num2;   
}
void Calculator:: mul() 
{
    res = num1 * num2;
}
void Calculator:: divide() 
{
    if (num2 != 0)
    res = (float)num1 / (float)num2;
}