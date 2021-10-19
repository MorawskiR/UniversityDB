#include <iostream>
#include "Student.hpp"
#include "University.hpp"
#include <vector>
#include "test.hpp"
int main()
{

  
 
    const Student Adam("Adam", "Kowalski", "Gdansk", 123, "00243059988", "Male");
    const Student Ewa("Ewa", "Nowak", "Poznan", 123, "57080162573", "Female");
    const Student Rafal("Rafal", "Malinowski", "Wroclaw", 789, "93032497982", "Male");


    University university;

    university.addStudent(Adam);
    university.addStudent(Rafal);
    university.addStudent(Ewa);
    

    auto search_result1 = university.SearchByName("Nowak");

    Test test;
    test.testSearchByName(search_result1);

    auto search_result2 = university.SearchByPesel("57080162573");
    test.testSearchByPesel(search_result2);

    university.SortByPesel();
    test.sortbyPesel(university.returnStudentList());

    university.RemoveByIndex(789);
    test.removeByIndex(university.returnStudentList());

    test.PeselValidation("50081436937");
    test.PeselValidation("00000000000");

    const Student Marian("Marian", "Kozak", "Warszawa", 568, "57122543212", "Male");
    university.addStudent(Marian);
    test.AddingRecord(university.returnStudentList());
    university.SaveToFile();
  
}
