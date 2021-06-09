//
//  main.cpp
//  lab1
//
//  Created by Дмитрий Панкратов on 25.05.2021.
//

#include <cstddef>
#include <iostream>
#include <string>
#include "Header.h"


using namespace std;

Pair::Pair() {}

Pair::Pair(int first, int second)
{
    this->first = first;
    this->second = second;
    
}


void Pair::SetFirst(int first)
{
    this->first=first;
}
void Pair::SetSecond(int second)
{
    this->second=second;
 
}

int Pair::GetFirst() const {
return first;
}
int Pair::GetSecond() const {
return second;
}


Pair operator+(const Pair& frst, const Pair& scnd)
{

    return Pair(frst.GetFirst() + scnd.GetFirst(), frst.GetSecond() + scnd.GetSecond());
}


std::ostream& operator<<(std::ostream& os, const Pair& p){
    return os<<p.GetFirst()<<"|"<<p.GetSecond();
}





Long:: Long(int first, int second)
{
    this->first = first;
    this->second = second;
    
}
Long operator*(const Long& frst, const Long& scnd)
{
    return  Long(frst.GetFirst() * scnd.GetFirst(), frst.GetSecond() * scnd.GetSecond());

}

Long operator+(const Long& frst, const Long& scnd)
{

    return Long(frst.GetFirst() + scnd.GetFirst(), frst.GetSecond() + scnd.GetSecond());

}

Long operator-(const Long& frst, const Long& scnd)
{

    return Long(frst.GetFirst() - scnd.GetFirst(), frst.GetSecond() - scnd.GetSecond());

}
std::ostream& operator<<(std::ostream& os, const Long& p){
    return os<<p.GetFirst()<<"|"<<p.GetSecond();
}
