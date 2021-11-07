// Student University::SearchByPesel(const std::string &pesel)
// {
//         return *std::find_if(student_list_.cbegin(), student_list_.cend(), [pesel](const auto &s){ return s.getPesel() == pesel;});
// // }

#pragma once

#include <array>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "Person.hpp"
#include "student.hpp"
#include "Employee.hpp"


class University{


std::vector<Person*> persons_; 
    
    public:
    University();
    University(const std::vector<Person*> persons);
    ~University() = default;

    void addRecord( Person * personEmployee);
    void DisplayDB();
};