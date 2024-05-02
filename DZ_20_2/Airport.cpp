#include "Airport.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#define DEBUG
Airport::Airport(const char* flight_number, const char* department_point, const char* point_of_importance, const char* Letak_brand, const char* how_many_places_there_are, const char* number_of_free_places, const char* passenger_list)
{

    strcpy_s(this->_flight_number, 100, _flight_number);
    strcpy_s(this->_department_point, 255, _department_point);
    strcpy_s(this->_point_of_importance, 255, _point_of_importance);
    strcpy_s(this->_Letak_brand, 100, _Letak_brand);
    _how_many_places_there_are = 4;    //кількість місць
    _number_of_free_places = 2;        //кількість вільних місць
    //strcpy_s(this->_passenger_list, 255, _passenger_list); //список пасажирів
        // виділення памяті для масиву рядків
    _passenger_list[100] = new char* [_how_many_places_there_are - _number_of_free_places];
    // виділення памяті під перший рядок
    _passenger_list[0] = new char[100] { "" };
    strcpy_s(this->_passenger_list[0], 100, _passenger_list);



#ifdef DEBUG

    cout << "point_of_importance" << endl;

#endif // DEBUG

}

Airport::Airport()
{

    strcpy_s(_flight_number, 100, "A-1-A");
    strcpy_s(_department_point, 255, "Kharkiv");
    strcpy_s(_point_of_importance, 255, "Moskva");
    strcpy_s(_Letak_brand, 100, "F-16");
    //strcpy_s(_how_many_places_there_are, 100, "2");//кількість місць
    //strcpy_s(_number_of_free_places, 100, "0");
    //strcpy_s(_passenger_list, 255, "Prizrak, Voin");//список пасажирів
#ifdef DEBUG



#endif // DEBUG

}

Airport::~Airport()
{
}

void Airport::set_flight_number(const char* flight_number)
{
}

void Airport::set_department_point(const char* department_point)
{
}

void Airport::set_point_of_importance(const char* point_of_importance)
{
}

void Airport::set_passenger_list(const char* passenger_list)
{
}

const char* Airport::get_flight_number()
{
    return nullptr;
}

const char* Airport::get_department_point()
{
    return nullptr;
}

const char* Airport::get_point_of_importance()
{
    return nullptr;
}

const char* Airport::get_Letak_brand()
{
    return nullptr;
}

const char* Airport::get_how_many_places_there_are()
{
    return nullptr;
}

const int Airport::get_number_of_free_places()
{
    return _number_of_free_places;
}

const char* Airport::get_passenger_list()
{
    return nullptr;
}

void Airport::showInfoAirport()
{
}
