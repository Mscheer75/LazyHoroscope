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
 string first;
 string last;
 int lastleng;





cout << "Please enter your first name: " << endl; //gets using inputs
cin >> firstn;
cout << "Please enter your last name: " << endl;
cin >> lastn;
cout << "Welcome, " << firstn[0] << "." << lastn[0] << "." << ", here is your fortune..." << endl;


first = firstn[0];//def of word lengths being stored into varibles
lucky = firstn.length();
lastleng = lastn.length();
last = lastn[lastleng-1];


cout << "your lucky number is " << lucky << endl;

if (first == "a" || first == "A" || first == "e" || first == "E" || first == "i" || first == "I" || first == "o" || first == "O" || first == "u" || first == "U"  )  

    {
    cout << "you destined to be famous!" << endl;



    } else 
    {

    cout << "you should keep a low profile." << endl;

    }
    
    if (last == "a" || last == "A" || last == "e" || last == "E" || last == "i" || last == "I" || last == "o" || last == "O" || last == "u" || last == "U")
    {
    cout << "you have already met your true love." << endl;
    }
    cout << "have a good day!" << endl;




  return 0;
}
