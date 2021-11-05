#include <iostream>
#include "student.hpp"

#include "Employee.hpp"
#include <vector>

// g++-10 main.cpp Student.cpp University.cpp Employee.cpp Person.cpp test.cpp && ./a.out 
int main()
{


    Employee employee("Robol", "2000", "Wroclaw", "76543212345", "Male",9000);
    Student student("Kamil", "Zdun", "Gdynia", "90876543456", "Male", 12345);

    Employee employee2("Adi", "Panek", "Warsaw", "98765435678", "Male", 1000);

    Student student2("Kahna", "Trabalski", "Poznan","3456789098", "Female",34562);

   

    // std::vector<std::shared_ptr<Person>> persons;

    Person * personEmployee = &employee;
    Person * personStudent = &student;

    std::vector<Person*> persons ;
    persons.push_back(personStudent);
    persons.push_back(personEmployee);
    // persons.push_back(std::make_shared<Employee>(employee));
    // std::cout<<"aaaa";
    // std::cout<<persons[0]->getName();    std::cout<<"aaaa";

    // const Student Adam("Adam", "Kowalski", "Gdansk", 123, "00243059988", "Male");
    // const Student Ewa("Ewa", "Nowak", "Poznan", 123, "57080162573", "Female");
    // const Student Rafal("Rafal", "Malinowski", "Wroclaw", 789, "93032497982", "Male");


    // University university;

    // university.addStudent(Adam);
    // university.addStudent(Rafal);
    // university.addStudent(Ewa);
    

    // auto search_result1 = university.SearchByName("Nowak");

    // Test test;
    // test.testSearchByName(search_result1);

    // auto search_result2 = university.SearchByPesel("57080162573");
    // test.testSearchByPesel(search_result2);

    // university.SortByPesel();
    // test.sortbyPesel(university.returnStudentList());

    // university.RemoveByIndex(789);
    // test.removeByIndex(university.returnStudentList());

    // test.PeselValidation("50081436937");
    // test.PeselValidation("00000000000");

    // const Student Marian("Marian", "Kozak", "Warszawa", 568, "57122543212", "Male");
    // university.addStudent(Marian);
    // test.AddingRecord(university.returnStudentList());
    // university.SaveToFile();
  
}