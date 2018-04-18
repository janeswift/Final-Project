//Final App
//Name: Jane Swift
//Date: 30 April 2018
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class wages
{
public: 
float hourly, tips, hours_worked, money_made;

float getHourly();
float getTips();
float getTaxRate(float);
void displaytable();
};

int main() 
{

//float stateTax = 0.495

cout << "---------------------------------------" << endl;
cout << "Hello, and welcome to the wagePage app." << endl;
cout << "---------------------------------------" << endl << endl;
cout << "This app aims to calculate the hourly wage and tips you have made for this week based on the Illinois state income tax.\n\n";
cout << "We already have the state's income tax in your database system. \n\nPlease follow the instructions below to get your weekly gross pay information.\n";

char choice;
do 
{
wages obj1;
obj1.getHourly();
obj1.getTips();
obj1.displaytable();
//obj1.getTaxRate(hourly);
cout << "Do you want to calculate again?(y or n)";
cin >> choice;
}while(choice == 'y');

return 0;
}

//////////////////////////////////////////////////////////////

float wages::getHourly()
{
  cout << "\nPlease enter your hourly wage: " << endl;
  cin >> hourly;
  cout << "\nPlease enter how many hours you worked: ";
  cin >> hours_worked;
  money_made = hourly * hours_worked;
  getTaxRate(money_made);
  return hourly;
}

//////////////////////////////////////////////////////////////

float wages::getTips()
{
  cout << "\nPlease enter the tips you've made for the week: \n";
  cin >> tips;
  
  return tips;
}

///////////////////////////////////////////////////////////////

float wages::getTaxRate (float Hourly)
{
  float taxrate;
  float ilStateTax = 0.495;
  taxrate = ilStateTax * Hourly; 
  cout << "\nThis is your hourly wage after tax: " << taxrate << endl;
  return taxrate;
}

//////////////////////////////////////////////////////////////

void wages::displaytable ()
{
  cout << "\nYour gross income for the week is << grossIncome <<
  ." << endl;
}
