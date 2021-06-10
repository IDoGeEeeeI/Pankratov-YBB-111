//
//  Double.hpp
//  lab5
//
//  Created by Дмитрий Панкратов on 10.06.2021.
//

#ifndef Double_hpp
#define Double_hpp

#include <stdio.h>
#include <iostream>
#include<cmath>
#endif /* Double_hpp */
using namespace std;

class _Double_
{

    
public:
    double a;
    double b;
    
    _Double_(double a,double b);
    void seta(const double a);
    void setb(const double b);
    double geta() const;
    double getb() const;

};

bool operator== (const _Double_& f1, const _Double_& f2);

