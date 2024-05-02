#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Airport
{
private:

	char _flight_number[100];            //номер рейсу
	char _department_point[255];         //пункт відправлення
	char _point_of_importance[255];      //пункт призначення
	char _Letak_brand[100];              //марка літака
	int _how_many_places_there_are;      //кількість місць
	int _number_of_free_places;          //кількість вільних місць
	char** _passenger_list;         //список пасажирів

public:

	Airport(const char* flight_number, const char* department_point, const char* point_of_importance, const char* Letak_brand, const char* how_many_places_there_are, const char* number_of_free_places, const char* passenger_list);
	Airport();
	~Airport();

	void set_flight_number(const char* flight_number);
	void set_department_point(const char* department_point);
	void set_point_of_importance(const char* point_of_importance);
	void set_passenger_list(const char* passenger_list);

	const char* get_flight_number();
	const char* get_department_point();
	const char* get_point_of_importance();
	const char* get_Letak_brand();
	const int get_how_many_places_there_are();
	const int get_number_of_free_places();
	const char* get_passenger_list();

	void showInfoAirport(); // виведення на екран


};

