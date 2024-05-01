#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Airport
{
private:

	char flight_number[100];            //номер рейсу
	char department_point[255];         //пункт відправлення
	char point_of_importance[255];      //пункт призначення
	char Letak_brand[100];              //марка літака
	char how_many_places_there_are[100];//кількість місць
	char number_of_free_places[100];    //кількість вільних місць
	char passenger_list[255];           //список пасажирів

public:

	Airport(const char* flight_number, const char* department_point, const char* point_of_importance, const char* Letak_brand, const char* how_many_places_there_are, const char* number_of_free_places, const char* passenger_list);
	Airport();
	~Airport();








};

