#pragma once
#include <iostream>
#include <cstring>
using namespace std;


class Student
{
private://������-������ �����: ϲ�, ������� ������, ���������� �������, ������ ����������, ����� ����������� �������, ����� �����. 

	char name[100];
	char mark_serednia[10];
	char telephone[50];
	char address[255];
	char name_zaclad[255];
	char number_grup[50];

	
public:

	Student();
	Student(const char* name, const char* mark_serednia, const char* telephone, const char* address, const char* name_zaclad, const char* number_grup);
	~Student();

	// �������� = ������� �� �������

	void setName(const char* newName);
	void setMark_serednia(const char* newMark_serednia);
	void setTelephone(const char* newTelephone);
	void setNumber_grup(const char* newNumber_grup);

	const char getName();
	const char getMark_serednia();
	const char getTelephone();
	const char getAddress();
	const char getName_zaclad();
	const char getNumber_grup();

	void showInfo();

};

