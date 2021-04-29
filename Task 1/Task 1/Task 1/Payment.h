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
    * \brief Параметрический конструктор
    * \param fullName : ФИО
    * \param salary : оклад
    * \param yearJoining : год поступления на работу
    * \param percentagePremium : процент надбавки
    * \param incomeTax : подоходный налог
    * \param numberDaysWorkedInMonth : кол-во отработанных дней в месяце
    * \param dayMonth : кол-во дней в месяце
    * \param accruals : начисленная сумма
    * \param withheld : удержанная сумма
    */
    Payment(const string fullName,const double salary, const int yearJoining, const double percentagePremium,const int incomeTax, const int numberDaysWorkedInMonth, const int dayMonth, const double accruals,const double withheld);
    /**
    * \brief Деконструктор
    */
    ~Payment() =default;
   


    /**
  * \brief Метод, возвращающий полное имя (ФИО)
  * \return ФИО
  */
    string getFullName()const;
    /**
   * \brief Метод, возвращающий оклад
   * \return оклад 
   */
    double getSalary()const;
    /**
   * \brief Метод, возвращающий год поступления на работу
   * \return год поступления на работу 
   */
    int getYearJoining()const;
    /**
   * \brief Метод, возвращающий процент надбавки
   * \return процент надбавки
   */
    double getPercentagePremium()const;
    /**
   * \brief Метод, возвращающий кол-во отработанных дней в месяце
   * \return кол-во отработанных дней в месяце
   */
    int getNumberDaysWorkedInMonth()const;
    



    /**
      * \brief Метод, возвращающий 
      * \param salary : оклад
      * \param numberDaysWorkedInMonth : кол-во отработанных дней в месяце
      * \return Начисленную сумму
      */
    double calculateTheAccruedAmount(const double salary, const int numberDaysWorkedInMonth) const;
    /**
      * \brief Метод, возвращающий
      * \param accruals : начисленная сумма
      * \param incomeTax : подоходный налог
      * \return Удержанная сумма
      */
    double calculateTheWithheldAmount(const double accruals,const int incomeTax) const;
    /**
       * \brief Метод, возвращающий
       * \param salary : оклад
       * \param numberDaysWorkedInMonth : кол-во отработанных дней в месяце
       * \param incomeTax : подоходный налог
       * \return Зарплату 
       */
    double calculationSalary(const double salary, const int numberDaysWorkedInMonth,const int incomeTax) const;
    /**
       * \brief Метод, возвращающий
       * \param yearJoining : год поступления на работу
       * \return Стаж
       */
    int calculationExperience(const int yearJoining) const;


private:
    /**
    * \brief ФИО
    */
    string fullName;
    /**
    * \brief оклад
    */
    double salary;
    /**
    * \brief год поступления на работу
    */
    int yearJoining;
    /**
    * \brief процент надбавки
    */
    double percentagePremium;
    /**
    * \brief подоходный налог
    */
    int incomeTax;
    /**
    * \brief кол-во отработанных дней в месяце
    */
    int numberDaysWorkedInMonth;
    /**
    * \brief кол-во рабочих дней в месяце
    */
    int dayMonth;
    /**
    * \brief начисленная сумма
    */
    double accruals;
    /**
    * \brief удержанная сумма
    */
    double withheld;
};
