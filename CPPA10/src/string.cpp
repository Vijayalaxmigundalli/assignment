#include<header.h>

using namespace std;

int main(int argc, char* argv[])
{
	string s1;
	string s2;
	cout<<"enter the line1:"<<endl;
	cin>>s1;
	cout<<"enter the line2:"<<endl;
	cin>>s2;
	for(int i=0;i<argc;i++)
		cout<<argv[i]<<s1<<s2<<endl;

	       
	        cout<<"enter the number of arguments to print:"<<endl;
		cin>>argc;
	       if(argc!=2){
		try{
	        throw argc;
		}
		catch(int argc){
		cout<<"insufficient arguments:"<<endl;
		}
	       }  
		int i;
		string arr[3]={" "," "};
		cout<<arr[0]<<endl;
		cout<<arr[1]<<endl;
		cout<<"enter the number of lines to print:"<<endl;
		cin>>i;
		if(i!=2)
		{
			cout<<"overflow error"<<endl;
		}
		else{
			cout<<"valid entry:"<<endl;
		}


return 0;
	
}
