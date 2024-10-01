#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate(string, int, int, int);
void compareMarks(string, int, string, int);

main()
{
	printMenu();
	
	string name;
	int matricMarks, interMarks, ecatMarks;
	cout<<"Enter your name: ";
	cin>>name;

	cout<<"Enter your matric marks: ";
	cin>>matricMarks;

	cout<<"Enter your inter marks: ";
	cin>>interMarks;

	cout<<"Enter your ECAT marks: ";
	cin>>ecatMarks;
	calculateAggregate(name, matricMarks, interMarks, ecatMarks);

	string nameStd1,nameStd2;
	int ecatMarksStd1,ecatMarksStd2;
	cout<<"Enter 1st student name: ";
	cin>> nameStd1;
	cout<<"Enter ECAT Marks: ";
	cin>> ecatMarksStd1;

	cout<<"Enter 2nd student name: ";
	cin>> nameStd2;
	cout<<"Enter ECAT Marks: ";
	cin>> ecatMarksStd2;
	compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
	
}

void printMenu()
{
	cout<<"*******************************************************************************************************************************************    " << endl;
	cout<<"*********************************************      UNIVERSITY ADMISSION MANAGEMENT SYSTEM     *********************************************    "<<endl;
	cout<<"*******************************************************************************************************************************************    " << endl;

}

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks)
{	
	float aggregate;
	aggregate = (matricMarks*0.3)/1100 + (interMarks*0.3)/520 + (ecatMarks*0.4)/1100;
	cout<<name<<" Your aggregate is: "<<100*aggregate<<endl;
}

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
	if (ecatMarksStd1 > ecatMarksStd2)
	{
		cout<<nameStd1<<" will be given 1st roll no.";
	}
	if (ecatMarksStd1 < ecatMarksStd2)
	{
		cout<<nameStd2<<" will be given 1st roll no.";
	}
}