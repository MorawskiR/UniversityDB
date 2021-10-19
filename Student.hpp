#pragma once

#include <string>
#include <vector>
#include <memory>


class Student{

private: 
    std::string name_;
    std::string surname_;
    std::string address_;
    size_t indexNumber_{0};
    std::string pesel_;
    std::string gender_;
    // struct Address{
    //     std::string stret_;
    //     size_t localNumber_;
    //     size_t streetNumber_;
    //     std::string postalCode_;
    // }
   

 public : 
    Student();
    Student(std::string name, std::string surname, std::string address, size_t indexNumber, std::string pesel, std::string gender);
    ~Student();

 
     

    void setName(const std::string&);
    void setSurname(const std::string&);
    void setAddress(const std::string&);
    void setIndex(const size_t);
    void setPesel(const std::string&);
    void setGender(const std::string&);

    std::string getName() const; 
    std::string getSurname() const ;
    std::string getAddress() const; 
    size_t getIndex() const ;
    std::string getPesel() const; 
    std::string getGender() const ;

};