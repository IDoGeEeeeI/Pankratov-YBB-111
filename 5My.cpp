//
//  5My.cpp
//  lab5
//
//  Created by Дмитрий Панкратов on 31.05.2021.
//

//17. Функция определяет, существуют ли прямые A1x+B1y+C1=0 и
//A2x+B2y+C2=0, если выражение d=A1B2-A2B1 не равно нулю. Прямые
//задаются структурой с тремя полями.

#include <iostream>
#include<cmath>
#include "Double.hpp"

using namespace std;
struct point {
    double A;
    double B;
    double C;
};


/**
* \brief Класс myException для работы c exception
*/
    class myException
        {
        public:
            string e;
            myException(const string& str)
            {
                e = str;
            }
            string what()
            {
                return e;
            }
        };
/**
* \brief  exception без спецификации исключений
*/
    bool length1(const point& p1, const point& p2) {
        if ((p1.A*p2.B-p2.A*p1.B)==0) throw 'e';
        return false;
    };
/**
* \brief  exception со спецификацией throw()
*/
    bool length2(const point& p1, const point& p2) throw() {
        if ((p1.A*p2.B-p2.A*p1.B)==0) throw 'e';
        return false;
    };
/**
* \brief  exception с конкретной спецификацией с подходящим стандартным исключением
*/
    bool length3(const point& p1, const point& p2) throw(invalid_argument) {
        if ((p1.A*p2.B-p2.A*p1.B)==0) throw invalid_argument("Error, points are the same\n");
        return false;
    }
/**
* \brief  exception с собственным реализованным исключением myException
*/
    bool length4_1(const point& p1, const point& p2) throw(myException) {
        if ((p1.A*p2.B-p2.A*p1.B)==0) throw myException("Error, points are the same\n");
        return false;
    }
/**
* \brief  Спецификация с собственным реализованным исключением (пустой класс)
*/
    class nullException {};
/**
* \brief  exception с собственным реализованным исключением nullException
*/
    bool length4_2(const point& p1, const point& p2) throw(nullException) {
        if ((p1.A*p2.B-p2.A*p1.B)==0) throw nullException();
        return false;
    }
/**
* \brief  Спецификация с собственным реализованным исключением (наследник от стандартного исключения с полями)
*/
    class InvalidValue : public exception
    {
    public:
        const char* what() const throw() {
            return "Error, points are the same\n";
        }
    };
/**
* \brief  exception с собственным реализованным исключением
*/
    bool length4_3(const point& p1, const point& p2) {
        if ((p1.A*p2.B-p2.A*p1.B)==0) throw InvalidValue();
        return false;
    }






    int main()
    {
        point p1, p2;
        cout << "Enter A1, B1, C1: ";
        cin >>p1.A>>p1.B>>p1.C;
        cout << "Enter A2, B2, C2: ";
        cin >>p2.A>>p2.B>>p2.C;
      
        cout << "Test error 1: ";
        try {
            double length;
            length= length1(p1, p2);
            if(length4_1(p1, p2)==false){
                cout<<"линии существуют - "<<p1.A<<"x"<<p1.B<<"y"<<p1.C<<"=0"<<" и ";
                cout<<p2.A<<"x"<<p2.B<<"y"<<p2.C<<"=0"<<endl;
            }
        }
        catch (char) {
            cout << "Error 1\n";
        }


        cout << "Test error 2: ";
        try {
            double length;
            length = length2(p1, p2);
            if(length4_1(p1, p2)==false){
                cout<<"линии существуют - "<<p1.A<<"x"<<p1.B<<"y"<<p1.C<<"=0"<<" и ";
                cout<<p2.A<<"x"<<p2.B<<"y"<<p2.C<<"=0"<<endl;
            }
        }
        catch (char) {
            cout << "Error 2\n";
        }


        cout << "Test error 3: ";
        try {
            double length;
            length = length3(p1, p2);
            if(length4_1(p1, p2)==false){
                cout<<"линии существуют - "<<p1.A<<"x"<<p1.B<<"y"<<p1.C<<"=0"<<" и ";
                cout<<p2.A<<"x"<<p2.B<<"y"<<p2.C<<"=0"<<endl;
            }
        }
        catch (invalid_argument& e) {
            cout << e.what();
        }


        cout << "Test error 4_1: ";
        try {
            double length;
            length = length4_1(p1, p2);
            if(length4_1(p1, p2)==false){
                cout<<"линии существуют - "<<p1.A<<"x"<<p1.B<<"y"<<p1.C<<"=0"<<" и ";
                cout<<p2.A<<"x"<<p2.B<<"y"<<p2.C<<"=0"<<endl;
            }
        }
        catch (myException& e) {
            cout << e.what();
        }


        cout << "Test error 4_2: ";
        try {
            double length;
            length = length4_2(p1, p2);
            if(length4_1(p1, p2)==false){
                cout<<"линии существуют - "<<p1.A<<"x"<<p1.B<<"y"<<p1.C<<"=0"<<" и ";
                cout<<p2.A<<"x"<<p2.B<<"y"<<p2.C<<"=0"<<endl;
            }
        }
        catch (nullException& e) {
            cout << "Error 4_2\n";
        }


        cout << "Test error 4_3: ";
        try {
            double length;
            length = length4_3(p1, p2);
            if(length4_1(p1, p2)==false){
                cout<<"линии существуют - "<<p1.A<<"x"<<p1.B<<"y"<<p1.C<<"=0"<<" и ";
                cout<<p2.A<<"x"<<p2.B<<"y"<<p2.C<<"=0"<<endl;
            }
        }
        catch (InvalidValue e) {
            cout << e.what();
        }
    }
