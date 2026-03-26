#pragma once
#include "Person.h"
#include <string>
using namespace std;
typedef unsigned int uint;
class PacientCard
{
private:
    string diagnosis="diagnos no set";
    uint number, day, month, hours, minutes;
    uint16_t year;
    Person pacient;
public:
    PacientCard(Person pacient, uint num, uint day, uint month, uint year, uint hours, uint minutes);
    void setDiagnosis(string text);
    string getDiagnosis();
};

