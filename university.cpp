

#include "university.hpp"
#include <iostream>
#include <algorithm>
#include <string>


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

     std::cout<<persons_[0]->getAddress();   //         std::cout<<persons_[i].getSurname()<<"\t";
    //         std::cout<<persons_[i].getAddress()<<"\t";
    //         std::cout<<persons_[i].getPesel()<<"\t";
    //         std::cout<<persons_[i].getGender()<<"\t";
    //         std::cout<<"\n";
    //     }
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
    //     // for ( auto &el : persons_)
    //     // {
    //     //     std::cout<<el[0].getName()<<"\t";
    //     //     std::cout<<el.getSurname()<<"\t";
    //     //     std::cout<<el.getAddress()<<"\t";
    //     //     std::cout<<el.getPesel()<<"\t";
    //     //     std::cout<<el.getGender()<<"\t";
    //     //     std::cout<<"\n";
    //     // }
        
    // }
    }
}