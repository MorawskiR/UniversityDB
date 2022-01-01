
#include "Student.hpp"
#include "test.hpp"
#include <iostream>


void Test::testSearchByName(Student s1)
{
    if(s1.getName() =="Ewa" )
    {
        std::cout<<"test search By name passed\n";
            std::cout<<s1.getName()<<"\t";
            std::cout<<s1.getSurname()<<"\t";
            std::cout<<s1.getAddress()<<"\t";
            std::cout<<s1.getIndex()<<"\t";
            std::cout<<s1.getPesel()<<"\t";
            std::cout<<s1.getGender()<<"\t";
            std::cout<<"\n";
    }
    else{
        std::cout<<"test search By name failed\n";

    }
}

void Test::testSearchByPesel(Student s1)
{
    if(s1.getName() =="Ewa" )
    {
        std::cout<<"test search By Pesel passed\n";
            std::cout<<s1.getName()<<"\t";
            std::cout<<s1.getSurname()<<"\t";
            std::cout<<s1.getAddress()<<"\t";
            std::cout<<s1.getIndex()<<"\t";
            std::cout<<s1.getPesel()<<"\t";
            std::cout<<s1.getGender()<<"\t";
    }
    else{
                std::cout<<"test search By Pesel failed\n";
    }
}

void Test::sortbyPesel(std::vector<Student> data)
{

    if((data[0].getPesel() == "00243059988") && (data[1].getPesel() == "57080162573"))
     {
        std::cout<<"\ntest sort By Pesel passed\n";
        
    }
    else{
        std::cout<<"test sort By Pesel failed\n";
    }
}

void Test::removeByIndex(std::vector<Student> data)
{
    if((data[0].getIndex() !=  789) && (data[1].getIndex() != 789))
    {
        std::cout<<"test remove by index passed\n";
    }
    else{
        std::cout<<"test remove by index failed\n";
    }
}

void Test::PeselValidation(const std::string &pesel)
{
    int sum = 0;
    int p;
    std::string a = "";
            for (size_t i = 0; i < (pesel.length()-1); i++)
               {
                a = pesel[i];
                p = std::stoi(a);
                if(i == 0 || i == 4 || i == 8) {sum = sum + p;}
                if(i == 1 || i == 5 || i == 9) {sum = sum + p* 3;}
                if(i == 2 || i == 6 ){sum = sum + p * 7;}
                if(i == 3 || i == 7) {sum = sum + p * 9;}
               }
                            
            sum = sum % 10;
            sum = 10 - sum;
            a = pesel[10];
            p = std::stoi(a);
            if (sum == p)
            {
                std::cout<<"PESEL OK. "<<"\n";
            }
            else
            { 
                std::cout<<"invalid PESEL number. \n";
            }

}

void Test::AddingRecord(std::vector<Student> data)
{
    if(data.size() == 3)
    {
          std::cout<<"Test add record passed "<<"\n";
    }
    else
    { 
        std::cout<<"Test add record number. ";
    }
}
