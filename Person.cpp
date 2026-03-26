#include "Person.h"
#include <string>
using namespace std;
typedef unsigned int uint;
Person::Person(string f_name, string m_name, string l_name, uint day, uint month, uint year, Sex s)
    : first_name(f_name), middle_name(m_name), last_name(l_name), b_day(day), b_month(month), b_year(year), sex(s) {
}
uint Person::years_at(uint day, uint month, uint yearth) const
{
    uint result = yearth - b_year;
    if (month < b_month) result--;
    else if (month == b_month && day < b_day) result--;
    return result;
}
uint Person::getDay() { return b_day; };
uint Person::getMonth() { return b_month; };
uint Person::getYear() { return b_year; };
string Person::getFullName() {
    return first_name + " " + middle_name + " " + last_name;
};