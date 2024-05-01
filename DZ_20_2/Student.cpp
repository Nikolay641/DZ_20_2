#include "Student.h"
#define DEBUG
Student::Student()
{
    strcpy_s(name, 100, "Mikola");
    strcpy_s(mark_serednia, 10, "12");
    strcpy_s(telephone, 50, "+380954206850");
    strcpy_s(address, 255, "Kharkiv");
    strcpy_s(name_zaclad, 255, "IT_STEP");
    strcpy_s(number_grup, 50, "PV-311");



#ifdef DEBUG

    cout << "student     - " << name << endl;
    cout << "mark        - " << mark_serednia << endl;
    cout << "telephone   - " << telephone << endl;
    cout << "address     - " << address << endl;
    cout << "name zaclad - " << name_zaclad << endl;
    cout << "grup        - " << number_grup << endl;

#endif // DEBUG
}
Student::Student(const char* name, const char* mark_serednia, const char* telephone, const char* address, const char* name_zaclad, const char* number_grup)
{
}
Student::~Student()
{
}
void Student::setName(const char* newName)
{
   
}

void Student::setMark_serednia(const char* newMark_serednia)
{


}

void Student::setTelephone(const char* newTelephone)
{
}

void Student::setNumber_grup(const char* newNumber_grup)
{
}

const char Student::getName()
{
    return 0;
}

const char Student::getMark_serednia()
{
    return 0;
}

const char Student::getTelephone()
{
    return 0;
}

const char Student::getAddress()
{
    return 0;
}

const char Student::getName_zaclad()
{
    return 0;
}

const char Student::getNumber_grup()
{
    return 0;
}

void Student::showInfo()
{
}
