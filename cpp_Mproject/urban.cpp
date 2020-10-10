#include"urban.h"
#include"unemp.h"
#include<string.h>
#include<math.h>
using namespace std;
Urban::Urban():UnEmp(){}
Urban::Urban(string& name,float u_male,float u_female,float u_person,int z ):UnEmp(name,u_male,u_female,u_person,z){}
string Urban::state()
{
    return state_name;
}
float Urban::person_rate()
{
    return round(urban_person);
}
float Urban::male_rate()
{
    return round(urban_male);
}
float Urban::female_rate()
{
    return round(urban_female);
}
float Urban::average()
{
    float avg=(urban_person+urban_male+urban_female)/3;
    return round(avg);
}
