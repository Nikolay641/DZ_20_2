// DZ_20_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Student.h"
#include "Airport.h"

int main()
{
	setlocale(LC_ALL, "");
	// Конструктор за замовчуванням

	Student a;

	// Конструктор з параметрами

	Student b("Iskorostenskiy M", "12", "0505892080", "Bezludovka", "Dom", "1");

	b.showInfo();



	Airport c;
	c.showInfoAirport();

	Airport x("1-2-3", "Kharkiv", "Kiev", "Boing-647", 100, 50, "Iskorostenskiy Mikola");
	x.showInfoAirport();

	x.add_passenger_list("Prizrac");
	x.add_passenger_list("Pri");
	x.add_passenger_list("Priz");
	x.add_passenger_list("Prizr");

	x.showInfoAirport();


};

