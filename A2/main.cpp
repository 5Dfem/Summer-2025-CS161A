// ------------- FILE HEADER -------------
// Author: Henry Schaerer
// Assignment:2
// Date: July 1st, 2025
// Description: calculates amount of servings and calories for a given number of oreos
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 2
// Participation: 8%
// Challenge: 6%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: 
// B. OUTPUT [yes/no]:
// C. CALCULATIONS [yes/no]:
// D. LOGIC and ALGORITHMS [yes/no]:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

#include <iomanip>
//used for setprecision(1)

using namespace std;

int main() {
  int COOKIES_PER_SERVING = 5;
  int CALORIES_PER_SERVING = 160;
  int cookiesEaten;
  double servingsEaten;
  double caloriesConsumed;

  cout << "Welcome to the Oreo Calculator!" << endl;
  cout << endl << "Enter the number of Oreos eaten: ";
  cin >> cookiesEaten;

  servingsEaten =  static_cast<double>(cookiesEaten) / COOKIES_PER_SERVING;
  caloriesConsumed = servingsEaten * CALORIES_PER_SERVING;


  cout << fixed << showpoint << setprecision(1);
  cout << endl << cookiesEaten << " Oresos equals " << servingsEaten << " servings!"  << endl;
  cout << "You consumed " << caloriesConsumed << " calories." << endl;
  cout << endl << "Keep eating Oreos!" << endl;
  return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: Oreo Calculator

Program Description: calculates amount of servings and calories for a given number of oreos

Design:
A. INPUT
Define the input variables including name data type. 
int COOKIES_PER_SERVING = 5;
int CALORIES_PER_SERVING = 260;
int cookiesEaten;

B. OUTPUT
Define the output variables including data types. 
double servingsEaten;
double caloriesConsumed;

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
servingsEaten =  cookiesEaten / COOKIES_PER_SERVING
caloriesConsumed = servingsEaten * CALORIES_PER_SERVING

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

Declare input variables;
declare output variables;

MESSAGE "Welcome to the Oreo Calculator!" << endl << endl;
MESSAGE "Enter the number of Oreos eaten: ";
INPUT cookiesEaten;

Run calculations;

SET_DISPLAY_FORMAT double 1 decimal point;
MESSAGE endl << cookiesEaten << " Oresos equals " << servingsEaten << " servings!"  << endl;
MESSAGE "You consumed " << caloriesConsumed << "calories." << endl;
MESSAGE endl << "Keep eating Oreos!" << endl;

SAMPLE RUNS
Copied from assignment document.


Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 12

12 Oreos equals 2.4 servings!
You consumed 384.0 calories.

Keep eating Oreos!


Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 3

3 Oreos equals 0.6 servings!
You consumed 96.0 calories.

Keep eating Oreos!

*/