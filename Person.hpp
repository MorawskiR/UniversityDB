
#pragma once
#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <fstream>

class Person{

protected: 

    std::string name_ ;
    std::string surname_;
    std::string pesel_;
    std::string gender_;
    std::string address_;
    
 public : 

    virtual std::string getName()  = 0;
    virtual std::string getSurname()= 0;
    virtual std::string getAddress()= 0;
    virtual std::string getPesel() = 0;
    virtual std::string getGender()= 0;

    virtual void setName(const std::string &name) = 0;
    virtual void setSurname(const std::string& surname) = 0;
    virtual void setAddress(const std::string& address) = 0;
    virtual void setPesel(const std::string& pesel)  = 0;
    virtual void setGender(const std::string& gender) = 0;
};