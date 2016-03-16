
//************************************************************************************************
// Name: It's an Algorithm
// Group Project CS110 Prof Looms
// Date: 3_12_2016
// Version: 2
// Program Name: FactFun
// Program Description: Helps students practice multiplication facts
//************************************************************************************************


// Directions to the preprocessor

#include <cmath>                   // Library for the math functions
#include <iostream>                // Library for cout, cin
#include <stdlib.h>                // Library for
#include <time.h>                  // Library allows access to random functions

using namespace std;               // Allows access to where the libraries make the declarations



// int main is the function that the CPU will call to start the program

	int main ()
{


// Declarations of the variables
	char again;                   // again is a character
	int a;                        // a is the first integer for the math problem
	int b;                        // b is the second integer for the math problem
	int answer;                   // answer will be the computer programs solution and will be an integer
	int guess;                    // guess will be the student's guess and must be an integer



	cout << "Welcome to FactFun Math Trainer" << endl;
           cout << "Each time you solve a problem or answer a question please press the Enter key when you are done." << endl;

	again='Y';                    // Assigns the value of Y to the variable again


	while ((again=='y') || (again=='Y'))      // This BLOCK keeps the program giving problems as long as the student replies with a y or Y
	{
		srand ( time(NULL) );              // Random number generator. produces 0-12
		a = rand() % 13;                    // Limits both a and b variable to be less than 13
		b = rand() % 13;

		cout << "Solve the equation " << a << " x " << b << " = " ;   //Prints a problem
			cin >> guess;                                                        //Assigns the students answer to the integer variable guess

		answer = a*b;

		                                              //Calculates the correct answer

        if (int (guess))
                {


		while ((answer != guess) && (0 <= guess <= 144))                                     //Loop for when the student's guess is wrong
                      {
			cout << "Incorrect. Please try again." << endl;           //Message if the student gets the problem wrong
			cout << "Solve the equation " << a << " x " << b << " = "; //Repeats the problem
			cin >> guess;                                                    //Takes a new guess from the student
                        }



		if ((answer == guess) & (0 <= guess <= 144))                                            //Instructions for when the student's answer is correct

			cout << "Correct. Would you like to try another problem? (y/n)?"; //Message offer another problem
			cin >> again;
	    }


         else cout << "Please enter an integer." << endl;
            cin >> again;




        while ((again != 'y') && (again != 'Y') && (again != 'n') && (again != 'N'))   //Loop that prevents wrong input for the y/n question

            {
            cin.ignore(100,'\n');
            cout << "Please type y or n and hit the Enter key." << endl;           // Offers student a chance to enter y or n correctly
            cin >> again;
            }                                             //Takes the new guess from the student for the next problem if they answered yes

	    if ((again == 'n') || (again == 'N'))      //These two lines print out comments when the user is done.
             cout << "Thank you for using FactFun Trainer. Please come back soon.";

     }




return 0;
}



