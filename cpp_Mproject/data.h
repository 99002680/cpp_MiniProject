#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include"unemp.h"
#include"rural.h"
#include"urban.h"
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class Data
{
    std::list <UnEmp> list1;
public:
    void add(string name,float r_male, float r_female,float r_person,float u_male,float u_female,float u_person);
    void remove(string);
    UnEmp* findRate(string);
    double findAverage();
    double findMax();
    int countAll();
};
#endif
