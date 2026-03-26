#pragma once
#include <string>
using namespace std;
typedef unsigned int uint;
struct Person
{
    enum class Sex : uint { Male, Female };//стать
    enum class idDocument : uint { Pasport, ID_Card };
    uint b_year; //рік дати народження
    string first_name;//ім'я
    string middle_name;//побатькові
    string last_name;//прізвище
    uint b_day, b_month; //день, місяць народженя
    Sex sex;
    Person(string f_name, string m_name, string l_name, uint day, uint month, uint year, Sex s)
        : first_name(f_name), middle_name(m_name), last_name(l_name), b_day(day), b_month(month), b_year(year), sex(s)
    {}
    uint years_at(uint day, uint month, uint yearth) const
    {
        uint result = yearth - b_year;
        if (month < b_month) result--;
        else if (month == b_month && day < b_day) result--;
        return result;
    }
};
struct PacientCard
{
    string diagnosis;
    uint number, day, month, hours, minutes;
    uint16_t year;
    Person pacient;
    PacientCard(Person pacient, uint num, uint day, uint month, uint year, uint hours, uint minutes)
        : pacient(pacient), number(num), day(day), month(month), year(year), hours(hours), minutes(minutes)
    {
    }
};