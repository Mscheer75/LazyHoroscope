/*Authors: Matthew Scheer
Date: 2/13/18
Program: horoscope
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
 string firstn;
 string lastn; //declare variables
 int lucky;


cout << "Please enter your first name: " << endl; //gets using inputs
cin >> firstn;
cout << "Please enter your last name: " << endl;
cin >> lastn;
cout << "Welcome, " << firstn[0] << "." << lastn[0] << "." << ", here is your fortune..." << endl;


cout << "The varible has " << firstn.length() << " letters. " << endl;  //tell fortune
lucky = firstn.length();
cout << "Your lucky number is " << lucky << endl;

  return 0;
}
