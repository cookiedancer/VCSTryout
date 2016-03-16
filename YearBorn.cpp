// Program Calculates User's Age Via Birth Year
// Name:    Eva Bayer
// Date:    February 10, 2016
// Version: V1.0
#include <iostream>
using namespace std;
int main ()
{

int currentYear;
int yearBorn;
int computedAge;

cout << "Birth Year Calculator" << endl;
cout << "Enter your year of birth (e.g. 1984) " ;
cin >> yearBorn ;
cout << "What is the current year? (e.g. 2016) ";
cin >> currentYear ;
computedAge = currentYear - yearBorn ;
cout << "Your current age is: " ;
cout << computedAge ;

return 0;
}
