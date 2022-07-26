#include"header.h"

int main()
{
  Employee emp;
   cout<<"------------"<<endl;
   cout<<"-----employee details are-------"<<endl;

     emp.getreportees();
     emp.getDetails();                      
     displayDetails(emp);       //friend function

      return 0;

}
