#include <vector>
#include "Student.hpp"




class Test{

public:

void testSearchByName(Student s1);
void testSearchByPesel(Student s1);
void sortbyPesel(std::vector<Student> data);
void removeByIndex(std::vector<Student> data);
void PeselValidation(const std::string &pesel);
void AddingRecord(std::vector<Student> data);
};