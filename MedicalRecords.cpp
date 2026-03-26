#include <iostream>
#include <string>
#include "myStruct.h"
using namespace std;

int main()
{
    Person person1 = Person("ivan", "Antonovutch", "Korotas", 23, 5, 1990, Person::Sex::Male);
    PacientCard pacient1 = PacientCard(person1,1, 30, 5, 2026, 18, 45);
    pacient1.diagnosis = "dfgd fgd fgdfgd fg dfgdf g";
    cout << person1.first_name << '\t' << person1.middle_name << '\t' << person1.last_name << endl;
    cout << person1.b_day << '.' << person1.b_month << '.' << person1.b_year << '\t' << person1.years_at(30,05,2026) <<" years"<< endl;
    return 0;
}