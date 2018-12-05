#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

class student
{
private:
std::string firstName;
std::string lastName;
double grade;
std::vector <double> grades;

public:
void setName(std::string, std::string);
std::string fullName();
void addGrade(double);
double getScore();
student()
{
grade = 0;
firstName = "";
lastName = "";
}


};
/*student::student()
{
grade = 0;
firstName = "";
lastName = "";
}*/


#endif
