#include"unemp.h"
#include"rural.h"
#include"urban.h"
#include"data.h"
//#include"csv.cpp"
#include <iostream>
#include<string>
#include <list>
#include <iterator>
#include <fstream>
#include <sstream>
using namespace std;
/*list <string> list1;
int main()
{
string line,word,temp;
ifstream myfile;
myfile.open("unemp.csv");
int row_count =0 ;
while(std::getline(myfile,line,'\n'))
{
    row_count +=1;
    std::stringstream  lineStream(line);
    std::string        cell;
    int column_count = 0 ;
    list1.push_back(line);
    //cout<<line<<endl;
}
}*/
void Data::add(string name,float r_male, float r_female,float r_person,float u_male,float u_female,float u_person)
{
    list1.push_back(UnEmp(name,r_male,r_female,r_person,u_male,u_female,u_person));
}
void Data::remove(string name)
{
    std::list<UnEmp> :: iterator iter;
    for(iter=list1.begin();iter!=list1.end();++iter)
    {
        if(iter->state()== name)
        {
           list1.erase(iter);
           break;
        }
    }
}
UnEmp* Data:: findRate(string name)
{
     std::list<UnEmp> :: iterator iter;

    for(iter=list1.begin();iter!=list1.end();++iter)
    {
        if(name == iter->state())
        {
            return &(*iter);
        }
    }
    return NULL;

}
double Data:: findAverage()
{
    double sum=0;
    std:: list <UnEmp> :: iterator iter;
    for(iter=list1.begin();iter!=list1.end();++iter)
    {
        sum = sum+ iter-> person_rate();
    }

    return sum/list1.size();

}
double Data:: findMax()
{
    std:: list<UnEmp> :: iterator iter = list1.begin();
    auto maxrate  = iter->person_rate();
   // auto maxiter = iter;
    ++iter;
    for(;iter!=list1.end();++iter)
    {
        if(maxrate < iter->person_rate())
        {
            maxrate = iter->person_rate();
           // maxiter = iter;
        }

    }
    return maxrate;
}
int Data:: countAll()
{
   return list1.size();
}








