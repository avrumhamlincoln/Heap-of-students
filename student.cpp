#include <iostream>
#include <sstream>
#include "student.h"
#include "address.h"
#include "date.h"

Student::Student(){
	firstName = "";
	lastName = "";
	homeAddress = new Address();
	birthDate = new Date();
	gradDate = new Date();
	creditHours = 0;
}

Student::~Student(){
	delete homeAddress;
	delete birthDate;
	delete gradDate;
}

void Student::init(std::string studentString){
	std::stringstream converter;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string sBirthDate;
	std::string sGradDate;
	std::string sCreditHours;

	converter.clear();
	converter.str(studentString);

	getline(converter, firstName, ',');
	getline(converter, lastName, ',');
	getline(converter, street, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip, ',');

	homeAddress->init(street, city, state, zip);

	getline(converter, sBirthDate, ',');
	getline(converter, sGradDate, ',');

	birthDate->init(sBirthDate);
	gradDate->init(sGradDate);

	getline(converter, sCreditHours, ',');

	converter.clear();
	converter.str("");
	converter << sCreditHours;
	converter >> creditHours;
}

void Student::printStudent(){
	std::cout << "-------------------------" << std::endl;
	std::cout << lastName << ", " << firstName << std::endl;
	homeAddress->printAddress();
	std::cout << "Birth Date: ";
	birthDate->printDate();
	std::cout << "Grad Date: ";
	gradDate->printDate();
	std::cout << "Credit Hours: " << creditHours << std::endl;
}

std::string Student::getLastFirst(){
	std::stringstream converter;
	converter.str("");
	converter << lastName << ", " <<firstName;
	return converter.str();
}

std::string Student::getFirstName(){
	return firstName;
}

std::string Student::getLastName(){
	return lastName;
}

int Student::getCreditHours(){
	return creditHours;
}

