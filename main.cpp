#include <iostream>
#include "Student.hpp"
#include "University.hpp"
#include <fstream>
#include <sstream>
#include <vector>
#include "test.hpp"
int main()
{


char sign ;

std::cin>>sign;

if(sign == 'z')
 {
        std::fstream diary("file1.txt", diary.in);
        std::vector<std::string> data {};
        if(diary.is_open()){
            std::string word;
        while(diary >> word) { //take word and print
            data.push_back(word);
        
        }
    }
    for( auto p : data)
    {
        std::cout<<p<<", ";
    }
std::string name = data.at(0);
std::string sn = data.at(1);
std::string city = data.at(2);
std::string indexno = data.at(3);

std::stringstream sstream(indexno);
size_t result;
sstream >> result;
std::cout << result << std::endl;


std::string pesel = data.at(4);
std::string gender = data.at(5);

    const Student File(name, sn, city, result,pesel, gender);
    University university;
    university.addStudent(File);




    auto search_result1 = university.SearchByName("Nowak");

    Test test;
    test.testSearchByName(search_result1);

    auto search_result2 = university.SearchByPesel("57080162573");
    test.testSearchByPesel(search_result2);

    university.SortByPesel();
    test.sortbyPesel(university.returnStudentList());
    university.DisplayDB();
    university.RemoveByIndex(789);
    university.DisplayDB();
    test.removeByIndex(university.returnStudentList());

    test.PeselValidation("50081436937");
    test.PeselValidation("00000000000");

    const Student Marian("Marian", "Kozak", "Warszawa", 568, "57122543212", "Male");
    university.addStudent(Marian);
    university.DisplayDB();
    test.AddingRecord(university.returnStudentList());
    university.DisplayDB();
    university.SaveToFile();
    std::cout<<"???????????";
}

else if(sign == 'n')
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
    university.DisplayDB();
    university.RemoveByIndex(789);
    university.DisplayDB();
    test.removeByIndex(university.returnStudentList());

    test.PeselValidation("50081436937");
    test.PeselValidation("00000000000");

    const Student Marian("Marian", "Kozak", "Warszawa", 568, "57122543212", "Male");
    university.addStudent(Marian);
    university.DisplayDB();
    test.AddingRecord(university.returnStudentList());
    university.DisplayDB();
    university.SaveToFile();
    std::cout<<"???????????";
}
else {
    return 0;
}
}
