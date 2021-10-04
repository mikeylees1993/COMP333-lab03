#include <iostream>
#include <string>
using namespace std;
/**
 * Name: Lauren Smith 
 * Class:  COMP 333
 * filename: classRoll.h 
 * Description:
 * write the specification file for the class ClassRoll 
*/
const int SIZE = 25;
struct StudentRec
{
    public:
    string studentName = "";
    int assignmentTotal= 0;
    int testTotal = 0;
    char letterGrade;
};


class ClassRoll
{
    private:
    string courseName;
    int maxStudents;
    int noStudents;
    StudentRec students[SIZE];
    int seachStudent(string /*Students Name*/);
    public:
    void showGrade(string /*Students Name*/);
    void writeStudents(ostream& /*Output stream ie file or cout*/);
    int getNoStudents(/*get the number of students*/);
    string getCourseName(/*returns course name*/);
    void changeGrade(string /*Student Name */, char /*Letter grade that you want to change*/);
};