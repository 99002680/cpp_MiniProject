#ifndef __UNEMP_H
#define __UNEMP_H

#include<string>
#include<cstdint>
using namespace std;
class UnEmp
{
protected:
    string state_name;
    float rural_male;
    float rural_female;
    float rural_person;
    float urban_male;
    float urban_female;
    float urban_person;
    //float p,m,f;
    int z=0;
public:
    UnEmp();
    UnEmp(string&,float,float,float,float,float,float);
    UnEmp(string&,float,float,float);
    UnEmp(string&,float,float,float,int);
    virtual string state();
    virtual float person_rate();
    virtual float male_rate();
    virtual float female_rate();
    virtual float average();
    void display();
};
#endif
