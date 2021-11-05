#pragma once
#include "Person.hpp"

#include <string>
#include <vector>
#include <memory>

class Student : public Person{

private: 

    size_t indexNumber_{0};
 public : 
    Student();

    Student(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t indexNumber);


    std::string getName() override;
    std::string getSurname() override;
    std::string getAddress() override;
    std::string getPesel() override;
    std::string getGender() override;
    size_t getIndex() const ;

    void setName(const std::string &name) override;
    void setSurname(const std::string& surname) override;
    void setAddress(const std::string& address) override;
    void setPesel(const std::string& pesel)  override;
    void setGender(const std::string& gender) override;
    void setIndex(const size_t);



    



};