#include "student.h"
#include <string>
void student::setName(std::string first, std::string last)
{
firstName = first;
lastName = last;

}

std::string student::fullName()
{
std::string fullname;
std::string str = "";
str.append(firstName).append(" ").append(lastName);
fullname = str;
return fullname;
}

void student::addGrade(double gradescore)
{
grades.push_back(gradescore);

}

double student::getScore()
{

for(int i = 0; i<grades.size(); i++)
{ 
  grade = grades[i] + grade;  
}
if(grades.size() > 0)
{
grade = grade/grades.size();
return grade;
}
else
{
 return 0;
}




}


