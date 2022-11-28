#include<iostream>
#include<conio.h>

using namespace std;
string st[3][10];
void fun(string s);

class stud
{public:
	int marks;
	char grade;
	string name;
	
	void srt(string z);
 }stud[3];
 
//  class stud::void srt(string z[10])
//  {public:
//  for(int i=0;i<10;i++)
// };

void fun(string s)
{
	char x;
	cout<<s;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<10;j++)
		{p[]
			x=getwchar(s);
		st[i][j]=x;
		}
		cout<<st;
	}
}

 int main(){
	// string stt("samp.txt");
	
 	stud[0].marks=92;
 	stud[0].grade='A';
 	stud[0].name="sam";
 	
 	stud[1].marks=55;
 	stud[1].grade='C';
 	stud[1].name="john";
 	
 	stud[2].marks=72;
 	stud[2].grade='B';
 	stud[2].name="anto";
 	
 	for(int i=0;i<3;i++)
 	{
 		cout<<stud[i].name<<endl;
 		cout<<stud[i].marks<<endl;
 		cout<<stud[i].grade<<endl;
	 }
	 for(int j=0;j<3;j++)
	 {
		fun(stud[j].name);	  
	 }
	
 }
