

#include "university.hpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>


University::University()
{
    persons_.reserve(20);
}

University::University(const std::vector<Person*> persons)
    : persons_(persons)
{
}

void University::addRecord( Person * personEmployee)
{
    persons_.push_back(personEmployee);
}

void University::DisplayDB()
{
    if (persons_.empty())
    {
        std::cout<<"No data to display.\n";
    }
    else
    {
        for(size_t i = 0; i < persons_.size(); i++)
        {
             std::cout<<persons_[i]->getName()<<"\t";
            std::cout<<persons_[i]->getSurname()<<"\t";
            std::cout<<persons_[i]->getAddress()<<"\t";
            std::cout<<persons_[i]->getPesel()<<"\t";
            std::cout<<persons_[i]->getGender()<<"\t";
            std::cout<<"\n";
        }
    }
}

    void University::SearchSalaryByPesel(std::string peselToUpdate)
    {
    auto record = *std::find_if(persons_.cbegin(), persons_.cend(), [peselToUpdate](const auto &s){ return s->getPesel() == peselToUpdate;});
    //std::unique_ptr<Person> p = University::GetThing();
    Employee* c = dynamic_cast<Employee*>(record);
    c->setSalary(1000);
    std::cout<<"aaaaaaaaAA";
    std::cout<<"nowe salary" <<c->getSalary();
      
        //   const std::type_info& type_info = typeid(*record);
        //    if( type_info == typeid(Employee) ) std::cout << "aaaaaaaaaaaaaaaaaaaaaaaaa\n" 
    }
    void University::ChangeSalary(Employee e)
    {
        std::cout<<e.getName();
        e.setSalary(1000);
    }

    static std::unique_ptr<Person> GetThing()
    {
        return std::make_unique<Employee>();
    }
    
void University::DisplayDB2()
 {
     for(auto & x : persons_){
        const std::type_info& type_info = typeid(*x) ; // typeid on reference to a polymorphic type

        if( type_info == typeid(Employee) ) 
        {
            std::cout << "EMP\n";
            Employee& new_b = dynamic_cast<Employee&>(*x); // sidecast
            std::cout<<new_b.getSalary();
        }
        else if( type_info == typeid(Student) ) 
        {
            std::cout << "STU\n" ;
            Student& new_b = dynamic_cast<Student&>(*x); // sidecast
            std::cout<<new_b.getIndex();

        }

     }
    //    std::type_info& types = typeid(x);

    //    if( types == typeid(Employee) ) 
    //    {
    //     std::cout << "Emp\n";
    //    }
    //    else if(types == typeid(Student))
    //    {
    //        std::cout<<"STU\n";
    //    }
        // Employee* c = dynamic_cast<Employee*>(record);
        // c->setSalary(1000);
           // Student* s = dynamic_cast<Student*>(type_info);
        // std::cout<<s->getName()<<"\t"<<s->getSurname()<<"\t"<<s->getAddress()<<"\t"<<s->getPesel()<<s->getGender()<<"\t"<<s->getIndex()<<"\n";       }
       // Employee* c = dynamic_cast<Employee*>(record);

     
 }
    
    // else
    // {
    //     for(size_t i = 0; i < persons_.size(); i++)
    //     {
    //          std::cout<<persons_[i]->getName()<<"\t";
    //         std::cout<<persons_[i]->getSurname()<<"\t";
    //         std::cout<<persons_[i]->getAddress()<<"\t";
    //         std::cout<<persons_[i]->getPesel()<<"\t";
    //         std::cout<<persons_[i]->getGender()<<"\t";
    //         std::cout<<"\n";
    //     }
    // }
