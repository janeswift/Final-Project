//Final App
//Name: Jane Swift
//Date: 30 April 2018
// This app takes user input with hourly wage, hours worked, and tips received if any, and will
// create a gross income calculation after configuring in taxes. This app is for the state of IL only.
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
class wages
{
public: 
float hourly, tips, hours_worked, money_made, taxrate;

float getHourly();
float getTips();
float getTaxRate(float);
//float total income(float, float);
};

int main() 
{

cout << "-----------------------------------------" << endl;
cout << "Hello, and welcome to the wagePage app." << endl;
cout << "-----------------------------------------" << endl << endl;
cout << "> This app will help you calculate the hourly wage and tips you have made for this week based on the Illinois state income tax. You may use this to calculate any given period of time however, weekly is what we recommend.\n\n";
cout << "> We already have the state's income tax in your database system. \n\n> Please follow the instructions below to get your weekly gross pay information.\n";

char choice;
do 
{
wages obj1;
obj1.getHourly();
obj1.getTips();
//obj1.displaytable();
//obj1.getTaxRate(hourly);
 float total_income = obj1.taxrate + obj1.tips; 
 
  cout << setprecision(2) << fixed;
  cout << "\n---------------------------------------" << endl;
  cout << "|Hourly Wage: $" << obj1.hourly << " |" << "Hours Worked: " << obj1.hours_worked << endl;
  cout << "|Week's Tips: $" << obj1.tips << " |" << "Gross Week Income: $" << total_income << endl;
  cout << "---------------------------------------" << endl;
  

cout << "\nDo you want to calculate again?(y or n)";
cin >> choice;
}while(choice == 'y'); 


return 0;
}

//////////////////////////////////////////////////////////////

float wages::getHourly()
{
  cout << setprecision(2) << fixed;
  cout << "\nPlease enter your hourly wage: " << endl;
  cin >> hourly;
  cout << "\nPlease enter how many hours you worked: ";
  cin >> hours_worked;
  money_made = hourly * hours_worked;
  getTaxRate(money_made);
  
  return money_made;
}

//////////////////////////////////////////////////////////////

float wages::getTips()
{
  cout << setprecision(2) << fixed;
  cout << "\nPlease enter the tips you've made for the week: \n";
  cin >> tips;
  
  return tips;
}

///////////////////////////////////////////////////////////////

float wages::getTaxRate (float Hourly)
{
  cout << setprecision(2) << fixed;
  float ilStateTax = 0.375 * Hourly;
  taxrate = Hourly - ilStateTax; 
  cout << "\nThis is your hourly wage after tax: " << taxrate << endl;
  return taxrate;
}
