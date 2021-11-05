#include <iostream>
#include "Student.hpp"


Student::Student() {
         name_ = "No name student";
        surname_ = "Unknown";
        address_ = "Honolulu";
        pesel_ = "9809890943";
        gender_ = "Male";
        indexNumber_ = 12345;
}

Student::Student(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t indexNumber)
{
    name_ = name;
    surname_ = surname;
    address_ = address;
    pesel_ = pesel; 
    gender_ = gender;
    indexNumber_ = indexNumber;
}

void Student::setName(const std::string& name) {
    name_ = name;
}

void Student::setSurname(const std::string& surname) {
    surname_ = surname;
}

void Student::setAddress(const std::string& address) {
    address_ = address;
}

void Student::setPesel(const std::string& pesel) {
      pesel_ = pesel;
}

void Student::setGender(const std::string& gender) {
    gender_ = gender;
}
void Student::setIndex(const size_t indexNumber) {
    indexNumber_ = indexNumber;
}

std::string Student::getName(){return name_;}
std::string Student::getSurname(){return surname_;}
std::string Student::getAddress(){return address_;}
std::string Student::getPesel() {return pesel_;}
std::string Student::getGender() {return gender_;}
size_t Student::getIndex() const {return indexNumber_;}
