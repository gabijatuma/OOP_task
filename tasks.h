#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <time.h>
#include <string>
#include <chrono>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;
using namespace std::chrono;

class Student{
private:
    string name, surname;
    double vid;
public:
    Student(): vid(0){}
    void setName(string nam, string sur) //setter
    {
        name = nam;
        surname = sur;
    }
    void setVid(double V) //setter
    {
        vid = V;
    }
    double getVid() const
    {
        return vid;
    }
    string getName()
    {
        return name;
    }
    string getSurname()
    {
        return surname;
    }
};


void readfilesL(char ty, int k);
void writefileL(list<Student>S, char type, int k);//pakeitimai
void writetwoL(list<Student>S, int k);
void writedeleteL(list<Student>S, int k);


void readfileV(char ty, int k);
void writefile(vector<Student>S, char type, int k);
void writetwoV(vector<Student>S, int k);
void writedeleteV(vector<Student>S, int k);

bool sortings (const Student& a, const Student& b);


void readfileD(char ty, int k);
void writefileD(deque<Student>S, char type, int k);
void writetwoD(deque<Student>S, int k);
void writedeleteD(deque<Student>S, int k);

void create (int k, char type);









#endif // TASKS_H_INCLUDED
