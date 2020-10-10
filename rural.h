#ifndef __RURAL_H
#define __RURAL_H

#include<string>
#include<cstdint>
#include"unemp.h"
using namespace std;
class Rural : public UnEmp
{
    //float avg;
public:
    Rural();
    Rural(string&,float,float,float);
    string state();
    float person_rate();
    float male_rate();
    float female_rate();
    float average();
};
#endif
