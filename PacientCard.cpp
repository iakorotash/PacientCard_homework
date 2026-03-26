#include "PacientCard.h"
#include "Person.h"
#include <string>
using namespace std;
typedef unsigned int uint;
    PacientCard::PacientCard(Person pacient, uint num, uint day, uint month, uint year, uint hours, uint minutes)
        : pacient(pacient), number(num), day(day), month(month), year(year), hours(hours), minutes(minutes)
    {
    }
    void PacientCard::setDiagnosis(string text){diagnosis = text;}
    string PacientCard::getDiagnosis() { return diagnosis; }