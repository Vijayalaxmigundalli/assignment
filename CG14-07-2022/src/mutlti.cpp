#include<multi.h>


using namespace std;

static void func1(int id)
{
	cout<<"\n i="<<id<<endl;
	cout<<"child dies"<<endl;
	wait(NULL);
	cout<<"ID"<<id<<endl;

}


int main(int argc, char* argv[])
{

	for(int i=0;i<argc;i++)
	{
	cout<<"enter the lines:"<<endl;
	cin>>argv[i];
	cout<<"argv[i]"<<endl;
        
	}
	int pid;
	signal(SIGINT,func1);
	pid = fork();
	if(pid ==0)
	{
		sleep(5);
		cout<<"I am child and my process ID is:"<<getpid()<<endl;
		cout<<"I am child and my parent PID is:"<<getppid()<<endl;
	ofstream f;
	string lines;
	f.open("test.txt", ios::out);
	if(!f)
	{
		cout<<"Invalid entry:"<<endl;
		exit(0);
	}
	cout<<"File opened successfully:"<<endl;
	getline(cin,lines);
	cout<<lines<<endl;
	f.close();
	}

	
	else
	{      
		wait(0);
		cout<<"I am parent and my process PID is:"<<getpid()<<endl;
		cout<<"I am parent and my parent PID is:"<<getppid()<<endl;
		ifstream f;
		string lines;
		f.open("test.txt", ios::in);
		if(!f)
		{
		cout<<"Invalid entry:"<<endl;
		exit(0);
		}
		cout<<"file opened successfully"<<endl;
		getline(f,lines);
		cout<<lines<<endl;
		f.close();

		cout<<"parent"<<endl;
		for(int i=0;i<20;i++);
		cout<<"\n parent dies"<<endl;
	}

	return 0;
}

		

        
