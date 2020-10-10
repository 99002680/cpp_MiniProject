#include"unemp.h"
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
UnEmp::UnEmp():state_name(""),rural_male(0),rural_female(0),rural_person(0),urban_male(0),urban_female(0),urban_person(0){}
UnEmp::UnEmp(string& name,float r_male,float r_female,float r_person,float u_male,float u_female,float u_person):state_name(name),
                                                                                                                rural_male(r_male),
                                                                                                                rural_female(r_female),
                                                                                                                rural_person(r_person),
                                                                                                                urban_male(u_male),
                                                                                                                urban_female(u_female),
                                                                                                                urban_person(u_person){}
UnEmp::UnEmp(string& name,float r_male,float r_female,float r_person):state_name(name),rural_male(r_male),rural_female(r_female),rural_person(r_person){}
UnEmp::UnEmp(string& name,float u_male,float u_female,float u_person,int z1 ):state_name(name),urban_male(u_male),urban_female(u_female),urban_person(u_person),z(z1){}
string UnEmp::state()
{
    return state_name;
}
float UnEmp::person_rate()
{
    float p=rural_person+urban_person;
    return round(p);

}
float UnEmp::male_rate()
{
    float m=rural_male+urban_male;
    return round(m);

}
float UnEmp::female_rate()
{
    float f=rural_female+urban_female;
    return round(f);

}
float UnEmp::average()
{
    return 0;
}
void UnEmp::display()
{
    cout<<state_name<<"-"<<rural_person<<","<<urban_person<<endl;
}
