#include <iostream>
#include <fstream>

using namespace std;

class student{
int roll;
string name;
float marks;
char grade;

public:
student()
{

}
public:
void input()
{
cout<<"Enter Roll Number: ";
cin>>roll;
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Marks: ";
cin>>marks;
cout<<"Enter Grades: ";
cin>>grade;
write();
}
public:
void display()
{
string line;
ifstream fin;
fin.open("student.txt");
getline(fin,line);
while(!fin.eof())
{
cout<<line<<endl;
getline(fin,line);
}
}
public:
void write()
{
ofstream fout;
fout.open("student.txt",ios::app);
fout<<roll<<"\t"<<name<<"\t"<<marks<<"\t"<<grade<<endl;
cout<<"Record has been saved successfully\n";
}
};
int main()
{
student s;
s.input();
s.display();

int choice;

cout<<"Do you want to add more student data ?\n"<<"press 1 to enter another students data !\n";
cin>>choice;
if (choice == 1)
{
	
return main ();
}

else
{
cout<<"Have a Good day Ahead !";
}
}
