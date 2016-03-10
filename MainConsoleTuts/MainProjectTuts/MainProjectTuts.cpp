// MainProjectTuts.cpp : Defines the entry point for the console application.
// Do Tutorial 14

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

																					//Declaring functions

void sampleFunction(int var1);

int addNumbers(int x, int y);


																					//CLASSES//


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

// ===============================
// ===============================
// ===============================
// ===============================







// Main

int main()
{


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
