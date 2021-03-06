//
// Created by ivan on 08.06.20.
//

#ifndef OOP_EXAM_DATE_HPP
#define OOP_EXAM_DATE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

namespace date_time {
    enum Month {
        Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
    };

    class Date {
    private:
        int year;
        Month month;
        int day;

        std::string month_str() const;
        int month_int() const;

    public:
        std::string to_string() const;
        [[nodiscard]] int toInt() const;

        explicit Date(int _year = 0, Month _month = Month(0), int _day = 1975): year(_year), month(_month), day(_day){}

        friend bool operator <(Date A, Date B);
        friend bool operator >(Date A, Date B);
        friend bool operator ==(Date A, Date B);
        friend bool operator !=(Date A, Date B);
        std::vector<int> to_vector();
    };

    class Time {
        int hours;
        int minutes;
        int seconds;
    public:

        explicit Time(int _hours = 0 , int _minutes = 0, int _sec = 0): hours(_hours), minutes(_minutes), seconds(_sec){}

        std::string to_string() const;
        [[nodiscard]] int toInt() const;

        friend bool operator <(Time A, Time B);
        friend bool operator >(Time A, Time B);
        friend bool operator ==(Time A, Time B);
        friend bool operator !=(Time A, Time B);
        std::vector<int> to_vector();
    };


    class DateTime {
    private:
        Date date;
        Time time;
    public:
        explicit DateTime(int year = 1975, Month month = Month(0), int day = 0, int hours = 0, int minutes = 0, int seconds = 0);
        DateTime(Date _date, Time _time): date(_date), time(_time) {}
        std::string to_string() const;
        int toInt() const;
        friend bool operator <(DateTime A, DateTime B);
        friend bool operator >(DateTime A, DateTime B);
        friend bool operator ==(DateTime A, DateTime B);
        friend bool operator !=(DateTime A, DateTime B);
        std::vector <int> to_vector();
    };




}



#endif //OOP_EXAM_DATE_HPP
