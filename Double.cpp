//
//  Double.cpp
//  lab5
//
//  Created by Дмитрий Панкратов on 10.06.2021.
//

#include "Double.hpp"
#include <iostream>
#include<cmath>
using namespace std;


    _Double_::_Double_(double a,double b)
    {
        this->a=a;
        this->b=b;
    }
    void _Double_::seta(const double A){
        this->a=A;
    }
    void _Double_::setb(const double B){
        this->b=B;
    }
   double _Double_::geta() const {
       return this->a;
   }
    double _Double_::getb() const{
        return this->b;
    }

bool operator== (const _Double_& f1, const _Double_& f2)
{
    return  (f1.geta()==f2.getb());
}
