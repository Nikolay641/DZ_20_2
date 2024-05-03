#include "Airport.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#define DEBUG
Airport::Airport(const char* flight_number, const char* department_point,
    const char* point_of_importance, const char* Letak_brand,
    const int how_many_places_there_are, const int number_of_free_places,
    const char* passenger_list)
{

    strcpy_s(this->_flight_number, 100, flight_number);
    strcpy_s(this->_department_point, 255, department_point);
    strcpy_s(this->_point_of_importance, 255, point_of_importance);
    strcpy_s(this->_Letak_brand, 100, Letak_brand);
    _how_many_places_there_are = 4;    //������� ����
    _number_of_free_places = 0;        //������� ������ ����
        // �������� ����� ��� ������ �����
    _passenger_list = new char* [_how_many_places_there_are - _number_of_free_places];
        // �������� ����� �� ������ �����
    _passenger_list[0] = new char[100] { "" };

    strcpy_s(this->_passenger_list[0], 100, passenger_list);



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

    _how_many_places_there_are = 4;    //������� ����
    _number_of_free_places = 4;        //������� ������ ����
    //strcpy_s(this->_passenger_list, 255, _passenger_list); //������ ��������
        // �������� ����� ��� ������ �����
    _passenger_list = new char* [_number_places];
    // �������� ����� �� ������ �����

#ifdef DEBUG



#endif // DEBUG

}

Airport::~Airport()
{
#ifdef DEBUG

    cout << "delete" << _flight_number << endl;

#endif // DEBUG

    for (int i = 0; i < _number_places; i++)
    {
        delete[] _passenger_list[i];
    }
    delete[] _passenger_list;


}

void Airport::set_flight_number(const char* flight_number)
{

    if (strlen(flight_number) > 0) {
        strcpy_s(_flight_number, 100, flight_number);
    }
    else
    {
        cout << "Error len\n";
    }

}

void Airport::set_department_point(const char* department_point)
{
    if (strlen(department_point) > 0) {
        strcpy_s(_department_point, 255, department_point);
    }
    else
    {
        cout << "Error len\n";
    }

}

void Airport::set_point_of_importance(const char* point_of_importance)
{
    if (strlen(point_of_importance) > 0) {
        strcpy_s(_point_of_importance, 255, point_of_importance);
    }
    else
    {
        cout << "Error len\n";
    }
}

void Airport::set_passenger_list(const char* passenger_list)
{
    if (strlen(passenger_list) > 0) {
        strcpy_s(_passenger_list[0], 100, passenger_list);
    }
    else
    {
        cout << "Error len\n";
    }
}

const char* Airport::get_flight_number()
{
    return _flight_number;
}

const char* Airport::get_department_point()
{
    return _department_point;
}

const char* Airport::get_point_of_importance()
{
    return _point_of_importance;
}

const char* Airport::get_Letak_brand()
{
    return _Letak_brand;
}

const int Airport::get_how_many_places_there_are()
{
    return _how_many_places_there_are;
}

const int Airport::get_number_of_free_places()
{
    return _number_of_free_places;
}


void Airport::showInfoAirport()
{

    cout << "--------------------------------------------------------------------" << endl;
    cout << "����� �����              " << _flight_number << endl;
    cout << "����� �����������       " << _department_point << endl;
    cout << "����� �����������        " << _point_of_importance << endl;
    cout << "����� �����             " << _Letak_brand << endl;
    cout << "������� ����          " << _how_many_places_there_are << endl;
    cout << "������� ������ ����  " << _number_of_free_places << endl;
    for (int i = 0; i < _number_places; i++)
    {
        cout << "\n = �������� = " <<i+1<< ", " << _passenger_list[i] << endl;
    }
    
    cout << "--------------------------------------------------------------------" << endl << endl;

}




// ��� ������� �������� �������� ���� ����������
void Airport::add_passenger_list(const char* passenger_list)
{
    if (strlen(passenger_list) >= 3) {
        _number_of_free_places--;
        _number_places++;

        char** tmp = new char* [_number_places];
        for (int i = 0; i < _number_places; i++)
        {
            tmp[i] = _passenger_list[i];
        }delete[] _passenger_list;

        tmp[_number_places - 1] = new char[100] {""};
        strcpy_s(tmp[_number_places - 1], 100, passenger_list);

        _passenger_list = tmp;

    }
    else
    {
        cout << "Error !!! \n";
    }

}

void Airport::dell_passenger_list(const char* passenger_list) //���������� ������
{   
    bool passenger_found = false;
    int index = -1;

    // ����� �������� � ������
    for (int i = 0; i < _number_places; i++)
    {
        if (strcmp(_passenger_list[i], passenger_list) == 0)
        {
            passenger_found = true;
            index = i;
            break;
        }
    }

    if (passenger_found)
    {
        // ��������� �������� � ������
        delete[] _passenger_list[index];
        for (int i = index; i < _number_places - 1; i++)
        {
            _passenger_list[i] = _passenger_list[i + 1];
        }
        _number_places--;

        // ��������� ������� ������ ����
        _number_of_free_places++;
    }
    else
    {
        cout << "�������� �� ��������!!!.\n";
    }
}



