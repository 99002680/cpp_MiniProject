#ifndef __URBAN_H
#define __URBAN_H

#include<string>
#include<cstdint>
#include"unemp.h"
using namespace std;
class Urban : public UnEmp
{
    //float avg;
public:
    Urban();
    Urban(string&,float,float,float,int);
    string state();
    float person_rate();
    float male_rate();
    float female_rate();
    float average();
};
#endif

