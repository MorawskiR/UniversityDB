#include "Employee.hpp"
#include <iostream>

Employee::Employee() {
        name_ = "No name employee";
        surname_ = "Unknown";
        address_ = "Honolulu";
        pesel_ = "9809890943";
        gender_ = "Male";
        salary_ = 1000;
    }

    Employee::Employee(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t salary)
    {
        name_ = name;
        surname_ = surname;
        address_ = address;
        pesel_ = pesel; 
        gender_ = gender;
        salary_ = salary;
    }

void Employee::setName(const std::string& name) {
    name_ = name;
}

void Employee::setSurname(const std::string& surname) {
    surname_ = surname;
}

void Employee::setAddress(const std::string& address) {
    address_ = address;
}

void Employee::setPesel(const std::string& pesel) {
      pesel_ = pesel;
}

void Employee::setGender(const std::string& gender) {
    gender_ = gender;
}
void Employee::setSalary(size_t salary ) {
    salary_ = salary;
}

std::string Employee::getName(){return name_;}
std::string Employee::getSurname(){return surname_;}
std::string Employee::getAddress(){return address_;}
std::string Employee::getPesel() {return pesel_;}
std::string Employee::getGender() {return gender_;}
size_t Employee::getSalary(){return salary_; }

