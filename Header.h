//
//  Header.h
//  lab1
//
//  Created by Дмитрий Панкратов on 25.05.2021.
//

//#ifndef Header_h
#define Header_h

#pragma once

#include <iostream>

using namespace std;

/**
* \brief Класс pair
*/
class Pair
{
    protected:
        /**
        * \brief первое число
        */
        int first;
        /**
        * \brief второе число
        */
        int second;
        
    public:
        /**
        * \brief дефолтный конструктор
        */
        Pair();
        /**
        * \brief Параметрический конструктор
        * \param first : первое число
        *\param second : второе число
        */
        Pair(int first, int second);
    
        /**
        * \brief Деконструктор
        */
        ~Pair() = default;
        /**
        * \brief Метод, устанавливает первое число
        */
        void SetFirst(int first);
        /**
        * \brief Метод, устанавливает второе число
        */
        void SetSecond(int second);
        /**
        * \brief Метод, возвращающий первое число
        * \return первое число
        */
        int GetFirst() const;
            /**
            * \brief Метод, возвращающий второе число
            * \return второе число
            */
        int GetSecond() const;
            /**
            * \brief Метод определения оператора сложения
            */
        friend Pair operator+(const Pair& frst,const Pair& scnd);
        /**
         * \brief Перегруженный оператор вывода
         */
        friend ostream& operator<<(ostream& os, const Pair& p);

    
};




/**
* \brief Класс Long наследуется от Pair
*/
class Long : public Pair {
    
    protected:
        /**
        * \brief первое число
        */
        int first;
        /**
        * \brief второе число
        */
        int second;


    public:

        Long(int first, int second);

        /**
        * \brief Метод, устанавливает первое число
        */
        void setFirst(int first);
        /**
        * \brief Метод, устанавливает второе число
        */
        void setSecond(int second);
        /**
        * \brief Метод, возвращающий первое число
        * \return первое число
        */
    
        /**
        * \brief Метод, возвращающий первое число
        * \return первое число
        */
        int getFirst() const;
        /**
        * \brief Метод, возвращающий второе число
        * \return второе число
        */
        int getSecond() const;
    
        

        /**
        * \brief Метод определение оператора умножения
        *\return переопределенный оператор умножения
        */
        friend  Long operator*(const Long& frst, const Long& scnd);

        /**
        * \brief Метод переопределение оператора сложения
        *\return переопределенный оператор сложения
        */
        friend  Long operator+(const Long& frst, const Long& scnd);

        /**
        * \brief Метод определение оператора вычитания
        *\return переопределенный оператор вычитания
        */
        friend  Long operator-(const Long& frst, const Long& scnd);
        
        
        /**
        * \brief Перегруженный оператор ввода
        */
        friend iostream& operator>>(iostream & in, Long& obj);

        /**
        * \brief Перегруженный оператор вывода
        */
        friend ostream& operator<<(ostream& os, const Long& obj);



};
