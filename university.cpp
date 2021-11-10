

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
            std::cout<<new_b.getSalary();
        }
    }
    std::cout<<personsTemp.size();
   std::sort(personsTemp.begin(), personsTemp.end(), [] (auto& lhs, auto& rhs)
        {
        const std::string &lhs_pesel = lhs->getSalary();
        const std::string &rhs_pesel = rhs->getSalary();

        return lhs_pesel < rhs_pesel;
        });
        for(auto & x : persons_){
        const std::type_info& type_info = typeid(*x) ; // typeid on reference to a polymorphic type

        if( type_info == typeid(Student) ) 
            {
                personsTemp.push_back(x);
            }
        }
        std::cout<<"\n\n";
    for(auto &x : personsTemp)
    {
        std::cout<<x->getName()<<"\n";
    }

}
// void University::SortByPesel()
// {
//     std::sort(student_list_.begin(), student_list_.end(), [] (const Student &lhs, const Student &rhs)
//     {
//         const std::string &lhs_pesel = lhs.getPesel();
//         const std::string &rhs_pesel = rhs.getPesel();

//         return lhs_pesel < rhs_pesel;
//     });

