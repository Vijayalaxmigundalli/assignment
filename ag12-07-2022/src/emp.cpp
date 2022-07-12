#include<emp.h>
#include<sys/types.h>
#include<unistd.h>
#include<wait.h>
#include<fstream>


using namespace std;

int main(int argc, char *argv[])
{
	  fstream E;
	char chr[] =("james",456,10000);
        pid = fork();
	if(pid == 0)
	{
		cout<<"child starts"<<endl;

		E.open(argv[1],ios::in);
		if(!E1)
		{
			cout<<"unable to open the file"<<endl;
			exit(0);
		}
		E.write(reinterpret_cast<char *>(&chr),sizeof(chr));
		E.close();
		cout<<"child terminates"<<endl;
	}
	else
	{
		wait((int *)0);
		cout<<"parent starts"<<endl;
		E.open(argv[1], ios::in);
		if(!E)
		{
			 cout<<"\n unable to open the file"<<endl;
			E.read(reinterpret_cast<char*>(&buf),sizeof(buf));
		        cout<<"\n Read charcters from the file"<<buf<<endl;
			cout<<"name"<<endl;
			cout<<"empid"<<endl;
			cout<<"sal"<<endl;
		        E.close();
			cout<<"Parent terminates"<<endl;
		}
		return 0;
	}
