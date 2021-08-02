
#pragma once
#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <fstream>

class Person{

public:

    std::string getName() const { return name_; }
    std::string getSurname() const {return surname_;}
    std::string getAddress() const {return address_;}
    std::string getPesel() const {return pesel_;}
    std::string getGender() const {return gender_;}

    void set_name(const std::string &name) { name_ = name; }
    void setSurname(const std::string& surname) { surname_ = surname; }
    void setAddress(const std::string& address) { address_ = address; }
    void setPesel(const std::string& pesel)  { pesel_ = pesel;}
    void setGender(const std::string& gender) { gender_ = gender; }

protected: 

    std::string name_ ;
    std::string surname_;
    std::string pesel_;
    std::string gender_;
    std::string address_;

};

