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
    strcpy_s(this->name, 100, name);
    strcpy_s(this->mark_serednia, 10, mark_serednia);
    strcpy_s(this->telephone, 50, telephone);
    strcpy_s(this->address, 255, address);
    strcpy_s(this->name_zaclad, 255, name_zaclad);
    strcpy_s(this->number_grup, 50, number_grup);
#ifdef DEBUG

    cout << "Student: " << endl;

#endif // DEBUG

}
Student::~Student()
{
#ifdef DEBUG
    cout << "~Student() " << name << endl;
#endif // DEBUG

    //*******************************
}
void Student::setName(const char* newName)
{

    if (strlen(newName) > 2) {
        strcpy_s(name, 100, newName);
    }
    else {
        cout << "Error strlen(newName): \n";
    };
   
}

void Student::setMark_serednia(const char* newMark_serednia)
{

    if (strlen(newMark_serednia) > 0) {
        strcpy_s(mark_serednia, 10, newMark_serednia);
    }
    else {
        cout << "Error strlen(newMark_serednia): \n";
    };
}

void Student::setTelephone(const char* newTelephone)
{
    if (strlen(newTelephone) > 4) {
        strcpy_s(telephone, 50, newTelephone);
    }
    else {
        cout << "Error strlen(newTelephone): \n";
    };
}

void Student::setNumber_grup(const char* newNumber_grup)
{
    if (strlen(newNumber_grup) > 0) {
        strcpy_s(number_grup, 50, newNumber_grup);
    }
    else {
        cout << "Error strlen(newTelephone): \n";
    };
}

const char* Student::getName()
{
    return name;
}

const char* Student::getMark_serednia()
{
    return mark_serednia;
}

const char* Student::getTelephone()
{
    return telephone;
}

const char* Student::getAddress()
{
    return address;
}

const char* Student::getName_zaclad()
{
    return name_zaclad;
}

const char* Student::getNumber_grup()
{
    return number_grup;
}

void Student::showInfo()
{
    cout << "-------------------------" << endl;
    cout << "student     - " << name << endl;
    cout << "mark        - " << mark_serednia << endl;
    cout << "telephone   - " << telephone << endl;
    cout << "address     - " << address << endl;
    cout << "name zaclad - " << name_zaclad << endl;
    cout << "grup        - " << number_grup << endl;
    cout << "-------------------------" << endl << endl;

}
