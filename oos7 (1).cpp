#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

void student1()
{
	cout<<"Student 1 : I have completed.";
}

void student2()
{
	cout<<"Student 2 : I have completed.";
}

void student3()
{
	cout<<"Student 3 : I have completed.";
}

int main()
{
	int s1=0,s2=0,s3=0;
	string thing1,thing2;
	cout<<"Teacher can put two things on table.\n1.Pen\n2.Paper\n3.Qpaper\n";
	A:
	cout<<"\nEnter two things that teacher puts on Table.\n";
	cout<<"First Thing : ";
	cin>>thing1;
	cout<<"Second Thing : ";
	cin>>thing2;
	if(s1>=1 && s2>=1 && s3>=1)
	{
		cout<<"Everyone has completed the test.";
	}
	else
	{
		if((thing1=="paper" && thing2=="qpaper") || (thing2=="paper" && thing1=="qpaper"))
		{
			s1++;
			student1();
			goto A;
		}
		else if((thing1=="pen" && thing2=="qpaper") || (thing2=="pen" && thing1=="qpaper"))
		{
			s2++;
			student2();
			goto A;
		}
		else
		{
			s3++;
			student3();
			goto A;
		}
	}
}
