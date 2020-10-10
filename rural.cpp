#include"rural.h"
#include"unemp.h"
#include<string.h>
#include<math.h>
using namespace std;
Rural::Rural():UnEmp(){}
Rural::Rural(string& name,float r_male,float r_female,float r_person):UnEmp(name,r_male,r_female,r_person){}
string Rural::state()
{
    return state_name;
}
float Rural::person_rate()
{
    return round(rural_person);
}
float Rural::male_rate()
{
    return round(rural_male);
}
float Rural::female_rate()
{
    return round(rural_female);
}
float Rural::average()
{
    float avg=(rural_person+rural_male+rural_female)/3;
    return round(avg);
}
