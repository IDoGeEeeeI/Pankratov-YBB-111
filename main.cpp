//
//  main.cpp
//  4Lab_правильная
//
//  Created by Дмитрий Панкратов on 27.05.2021.
//

#include "Header.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

Func::Func(const double a):a(a){}

double Func::getA() const
{
    return this->a;
}

void Func::setA(double a)
{
    this->a = a;
}

std::istream& operator>>(std::istream& in, Func& f)
{
    double a;
    in >> a;
    f = Func(a);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Func& f)
{
    out << "Value:  " << f.getA() << std::endl;
    return out;
}

double Function::getFunc(const double a) const
{
    return getA();
}

Function::Function(const double a)
{
    if (a > 1 | a < 0) throw "invalid_argument";
    setA(a);
    SetCosec();
    SetCosec();
    SetDerSec();
    SetDerCosec();
}

double Function::getA() const
{
    return this->a;
}

void Function::setA(const double a)
{
    this->a = a;
}

void Function::SetSec()
{
    //this->Sec = asin(getA());
    this->Sec = 1/(acos(getA()));
}

void Function::SetCosec()
{
    //this->Cosec = acos(getA());
    this->Cosec = 1/(asin(getA()));
}

void Function::SetDerSec()
{
    //this->DerSec = 1 / sqrt(1 - pow(getA(), 2));
    this->DerSec = atan(getA()) * 1/(acos(getA()));

}

void Function::SetDerCosec()
{
    //this->DerCosec = -getDerSec();
    this->DerSec = -1*(acos(getA()/asin(getA()))) * 1/(asin(getA()));

    
}

double Function::getSec() const
{
    return this->Sec;
}

double Function::getCosec() const
{
    return this->Cosec;
}

double Function::getDerSec() const
{
    return this->DerSec;
}

double Function::getDerCosec() const
{
    return this->Cosec;
}

std::istream& operator>>(std::istream& in, Function& f)
{
    double a;
    in >> a;
    f = Function(a);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Function& funct)
{
    out << "Sec(x)= " << funct.getSec() << std::endl
        << "Sec(x)'= " << funct.getDerSec() << std::endl
        << "Cosec(x)= " << funct.getCosec() << std::endl
        << "Cosec(x)'= " << funct.getDerCosec() << std::endl;
    return out;
}

