#include <iostream>
#include "student.hpp"
#include "university.hpp"
#include "Employee.hpp"
#include "Person.hpp"
#include <vector>

//g++-10 main.cpp Student.cpp University.cpp Employee.cpp Person.cpp test.cpp && ./a.out 
// g++-10 main.cpp student.cpp university.cpp Employee.cpp Person.cpp  && ./a.out 
int main()
{


    Employee employee("Robol", "Robotniczy", "Wroclaw", "76543212345", "Male", 1000);
    Student student("Kamil", "Zdun", "Gdynia", "90876543456", "Male", 12345);
    Employee employee2("Adi", "Panek", "Warsaw", "98765435678", "Male", 2000);
    Student student2("Kahna", "Trabalski", "Poznan","3456789098", "Female",34562);

    Person * personEmployee = &employee;
    Person * personStudent = &student;
    Person * personEmployee2 = &employee2;
    Person * personStudent2 = &student2;

    University university;
    university.addRecord(personEmployee);
    university.addRecord(personStudent);
    university.addRecord(personEmployee2);
    university.addRecord(personStudent2);
    university.DisplayDB2();
    university.ModifySalaryByPesel("76543212345");
    university.sortBySalary();
    university.DisplayDB2();
  
}
