

#include "university.hpp"
#include <iostream>
#include <memory>
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
    std::cout<<"------------ Base ------------"<<"\n";

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


void University::ModifySalaryByPesel(std::string peselToUpdate)
{
    auto record = *std::find_if(persons_.cbegin(), persons_.cend(), [peselToUpdate](const auto &s){ return s->getPesel() == peselToUpdate;});
    Employee* c = dynamic_cast<Employee*>(record);
    c->setSalary(15000);     
}


    static std::unique_ptr<Person> GetThing()
    {
        return std::make_unique<Employee>();
    }
    
void University::DisplayDB2()
 {
     std::cout<<"------------ Base ------------"<<"\n";
     for(auto & x : persons_){
        const std::type_info& type_info = typeid(*x) ; // typeid on reference to a polymorphic type

        if( type_info == typeid(Employee) ) 
        {
            Employee& new_b = dynamic_cast<Employee&>(*x); // sidecast
            std::cout<<new_b.getName()<<"\t"<<new_b.getSurname()<<"\t"<<new_b.getAddress()<<"\t"<<new_b.getPesel()<<new_b.getGender()<<"\t"<<new_b.getSalary();    
        }
        else if( type_info == typeid(Student) ) 
        {
            Student& new_b = dynamic_cast<Student&>(*x); // sidecast
            std::cout<<new_b.getName()<<"\t"<<new_b.getSurname()<<"\t"<<new_b.getAddress()<<"\t"<<new_b.getPesel()<<new_b.getGender()<<"\t"<<new_b.getIndex();
        }
std::cout<<"\n";
}
}

void University::sortBySalary()
{
    std::vector<Person*> personsTemp;
    personsTemp.reserve(20);

    for(auto & x : persons_){
    const std::type_info& type_info = typeid(*x) ; // typeid on reference to a polymorphic type

        if( type_info == typeid(Employee) ) 
        {
            Employee& new_b = dynamic_cast<Employee&>(*x);
            personsTemp.push_back(&new_b);
        }
    }
    std::vector<Employee*> EmployeeTemp;
    for(auto & x : personsTemp)
    {
        Employee& new_b = dynamic_cast<Employee&>(*x); // sidecast
        EmployeeTemp.push_back(&new_b);
    }
    std::sort(EmployeeTemp.begin(), EmployeeTemp.end(), [] (auto& lhs, auto& rhs)
        {
         size_t lhs_pesel = lhs->getSalary();
         size_t rhs_pesel = rhs->getSalary();

        return lhs_pesel < rhs_pesel;
        });
        personsTemp.clear();
        for(auto & x : EmployeeTemp)
        {
        Person& new_a = dynamic_cast<Person&>(*x);
        personsTemp.push_back(&new_a);

}


       for(auto & x : persons_)
        {
        const std::type_info& type_info = typeid(*x) ; // typeid on reference to a polymorphic type
        
        if( type_info == typeid(Student) ) 
            {
                personsTemp.push_back(x);
            }
        }
        persons_.clear();

        persons_  = personsTemp;

}
