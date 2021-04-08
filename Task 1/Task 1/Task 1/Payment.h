#pragma once
#include <string>
using namespace std;
/**
* \brief Класс зарплата
*/
class Payment 
{
public:
    /**
    * \brief Конструктор по умолчанию
    */
    Payment();
    /**
    * \brief Параметрический конструктор
    * \param full_name : ФИО
    * \param salary : оклад
    * \param year_of_joining : год поступления на работу
    * \param percentage_of_premium : процент надбавки
    * \param number_of_days_worked_in_a_month : кол-во отработанных дней в месяце
    */
    Payment(const string full_name,const double salary, const int year_of_joining, const double percentage_of_premium, const int number_of_days_worked_in_a_month);
    /**
    * \brief Деконструктор
    */
    ~Payment();
   


    /**
  * \brief Метод, возвращающий полное имя (ФИО)
  * \return ФИО
  */
    string getfull_name()const;
    /**
   * \brief Метод, возвращающий оклад
   * \return оклад 
   */
    double getSalary()const;
    /**
   * \brief Метод, возвращающий год поступления на работу
   * \return год поступления на работу 
   */
    int getYear_of_joining()const;
    /**
   * \brief Метод, возвращающий процент надбавки
   * \return процент надбавки
   */
    double getPercentage_of_premium()const;
    /**
   * \brief Метод, возвращающий кол-во отработанных дней в месяце
   * \return кол-во отработанных дней в месяце
   */
    int getNumber_of_days_worked_in_a_month()const;
    



    /**
      * \brief Метод, возвращающий 
      * \param salary : оклад
      * \param number_of_days_worked_in_a_month : кол-во отработанных дней в месяце
      * \return Начисленную сумму
      */
    double calculate_the_accrued_amount(const double salary, const int number_of_days_worked_in_a_month) const;
    /**
      * \brief Метод, возвращающий
      * \param accruals : начисленная сумма
      * \param income_tax : подоходный налог
      * \return Удержанная сумма
      */
    double calculate_the_withheld_amount(const double accruals,const int income_tax) const;
    /**
       * \brief Метод, возвращающий
       * \param salary : оклад
       * \param number_of_days_worked_in_a_month : кол-во отработанных дней в месяце
       * \param income_tax : подоходный налог
       * \return Зарплату 
       */
    double calculation_of_salary(const double salary, const int number_of_days_worked_in_a_month,const int income_tax) const;
    /**
       * \brief Метод, возвращающий
       * \param year_of_joining : год поступления на работу
       * \return Стаж
       */
    int calculation_of_experience(const int year_of_joining) const;


private:
    /**
    * \brief ФИО
    */
    string full_name;
    /**
    * \brief оклад
    */
    double salary;
    /**
    * \brief год поступления на работу
    */
    int year_of_joining;
    /**
    * \brief процент надбавки
    */
    double percentage_of_premium;
    /**
    * \brief подоходный налог
    */
    int income_tax;
    /**
    * \brief кол-во отработанных дней в месяце
    */
    int number_of_days_worked_in_a_month;
    /**
    * \brief кол-во рабочих дней в месяце
    */
    int number_of_working_days_in_a_month;
    /**
    * \brief начисленная сумма
    */
    double accruals;
    /**
    * \brief удержанная сумма
    */
    double withheld;
};
