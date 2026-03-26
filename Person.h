#pragma once
#include <string>
using namespace std;
typedef unsigned int uint;
class Person
{
public:
    enum class Sex : uint { Male, Female };//стать
    enum class idDocument : uint { Pasport, ID_Card };
private:
    uint b_year; //рік дати народження
    string first_name;//ім'я
    string middle_name;//побатькові
    string last_name;//прізвище
    uint b_day, b_month; //день, місяць народженя
    Sex sex;
public:
    Person(string f_name, string m_name, string l_name, uint day, uint month, uint year, Sex s);
    uint years_at(uint day, uint month, uint yearth) const;
    uint getDay();
    uint getMonth();
    uint getYear();
    string getFullName();
};

