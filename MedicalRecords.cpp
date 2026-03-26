#include <iostream>
#include <string>
#include "PacientCard.h"
#include "Person.h"
using namespace std;

int main()
{
    Person person1 = Person("ivan", "Antonovutch", "Korotas", 23, 5, 1990, Person::Sex::Male);
    PacientCard pacient1 = PacientCard(person1,1, 30, 5, 2026, 18, 45);
    pacient1.setDiagnosis ( "interpolyaciynyi polinom Lagranga");
    cout << person1.getFullName()<< endl;
    cout << person1.getDay() << '.' << person1.getMonth() << '.' << person1.getYear() << '\t' << person1.years_at(30,05,2026) <<" years"<< endl;
    cout << pacient1.getDiagnosis() << endl;
    return 0;
}