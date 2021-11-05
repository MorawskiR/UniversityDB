// Przechowywanie rekordów pracowników uczelni o strukturze: imię, nazwisko, PESEL, płeć, adres, zarobki

#pragma once
#include <string>
#include "Person.hpp"

class Employee : public Person
{
    size_t salary_;

public:
    Employee();

    Employee(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t salary);
    
      
    std::string getName() override;
    std::string getSurname() override;
    std::string getAddress() override;
    std::string getPesel() override;
    std::string getGender() override;
    size_t getSalary();

    void setName(const std::string &name) override;
    void setSurname(const std::string& surname) override;
    void setAddress(const std::string& address) override;
    void setPesel(const std::string& pesel)  override;
    void setGender(const std::string& gender) override;
    void setSalary(size_t salary);
};