// MainProjectTuts.cpp : Defines the entry point for the console application.
// Do Tutorial 21

#include "stdafx.h"
#include <iostream>
#include <string>
#include "ExampleClass2.h"

using namespace std;

////////////////////////////////////////////////////////Declaring functions

void sampleFunction(int var1);

int addNumbers(int x, int y);

//////////////////////////////////////////////////////////CLASSES


//A class that contains only a public function
class ExPublicFun
{

public:
	void examplePubFunction()
	{
		cout << "this is exampleFunction." << endl;
	}

};

//A class that contains private AND public variables

class ExPrivateVar

/*
Example usage:

	ExPrivateVar ExampleObject;
	ExampleObject.setName("Variable 'name' has been set to this text.");
	cout << ExampleObject.getName();

*/

{
	//First function SETS the name
	//Second function Retrieves the name
public:
	void setName(string name1)
	{
		name = name1;
	}

	string getName()
	{
		return name;
	}

	//We cannot DIRECTLY access this variable. Instead, we modify it using the public two functions above (because they can be called globally).

private:
	string name;

};

//construtor example:
class ExConstructor
{
	// What does a constructor do? It's a function that AUTOMATICALLY gets called the object gets called (doesn't need to make an object to call the function).
	// One useful use of the constructor is to declare or assign values to variables.
public:
	ExConstructor(string exString) //this is our constructor. notice that it has the same name as the class. It also doesn't have a return type.
	{
		cout << "The contructor has been called." << endl; //When the object is called, it will automatically call this line.
		setVar(exString);
	}

	void setVar(string a)
	{
		testVar1 = a;
	}
	string getVar()
	{
		return testVar1;
	}
	void someFunction()
	{
		cout << "Hello." << endl;
	}
private:
	string testVar1;
	string testVar2;

};


// ===============================
// ===============================
// ===============================
// ===============================







// Main

int main()
{
	int age;
	int ageTotal = 0;
	int numberOfPeopleEntered = 0;

	cout << "Enter first persons age or -1 to quit" << endl;
	cin >> age;

	while (age != -1) 
	{ 
		ageTotal = ageTotal + age;
		numberOfPeopleEntered++;

		cout << "Enter next persons age or -1 to quit" << endl;
		cin >> age;
	}

	cout << "Number of people entered: " << numberOfPeopleEntered << endl;
	cout << "Average age of people entered: " << ageTotal / numberOfPeopleEntered << endl;



	return 0;
}





// ===============================
// ===============================
// ===============================
// ===============================

																			//Functions 

// Example of a function that takes 1 parameter

void sampleFunction(int var1)
{
	cout << "number1 is: " << var1 << endl;

}


// Example of a multi-parameter function

int addNumbers(int x, int y)
{
	int answer = x + y;
	return answer;
}
