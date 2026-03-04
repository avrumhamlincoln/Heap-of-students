#include <iostream>
#include <vector>
#include <fstream>
#include "date.h"
#include "address.h"
#include "student.h"

void testAddress();
void testDate();
void testStudent();

void loadStudents(std::vector<Student*>&);
void printStudents(std::vector<Student*>&);
void showStudentNames(std::vector<Student*>&);
void findStudent(std::vector<Student*>&);
void delStudents(std::vector<Student*>&);
std::string menu();

int main(){

/*
  std::cout << "Hello!" << std::endl;
 testAddress();
 testDate();
 testStudent();
*/

  std::vector<Student*> students;
  loadStudents(students);
  showStudentNames(students);
  delStudents(students);

  return 0;
}// end main

void delStudents(std::vector<Student*>& students){
	for (Student* student: students){
		delete student;
	}
}

void showStudentNames(std::vector<Student*>& students){
	for (Student* student: students){
		std::cout << student->getLastFirst() << std::endl;
	}
}


void loadStudents(std::vector<Student*>& students){  
  std::ifstream inFile;
  std::string currentLine;

  inFile.open("students.csv");
  while(getline(inFile, currentLine)){
   // std::cout << currentLine << std::endl;
    Student* s = new Student();
    s->init(currentLine);
    students.push_back(s);
  }

  inFile.close();
} // end loadStudents

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent/
