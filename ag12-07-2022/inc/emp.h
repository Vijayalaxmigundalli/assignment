#pragma once
#include<iostream>

using namespace std;
class Employee
{
	 protected:
		        string name;
		        int empid;
			int sal;

	 public:
		  Employee(){}
		  Employee(string n, int eid, int s){
			    name = n;
			    empid = eid;
	                     sal = s;
		  }
		    void display(){
	              cout<<"name:"<<name<<endl;
	              cout<<"empid:"<<empid<<endl;
		      cout<<"salary:"<<sal<<endl;
		    }
		    string getname();

};


