// ------------- FILE HEADER -------------
// Author: Henry Schaerer
// Assignment: 3
// Date: July 13th, 2025
// Description: Washington State Ferries Fare Calculator
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 3
// Participation: 83%
// Challenge: 76%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 0
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: yes
// B. OUTPUT [yes/no]: yes
// C. CALCULATIONS [yes/no]: yes
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]:  yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

#include <iomanip> //used for setprecision()

using namespace std;

int main() {
  double VEHICLE_FARE = 57.90;
  double ADULT_FARE = 14.95;
  double SENIOR_FARE = 7.40;
  double YOUTH_FARE = 5.55;
  double BICYCLE_SURCHARGE = 4.00;
  double FREE_TICKET_THRESHOLD = 100.00;
  int MAX_GROUP_SIZE = 20;

  int totalPeople;
  bool noError = true;
  bool chargeForBikes = true;

  char vehicle;
  int numAdults = 0;
  int numSeniors = 0;
  int numYouths = 0;
  int numBikes = 0;

  double totalCharge = 0;
  double amountUntilFreeTicket;

/*
Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 2
How many seniors? 1
How many youths? 1
How many bikes? 2

Your total charge is $50.85

If you spend $49.15 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!
*/

  cout << fixed << showpoint << setprecision(2);
  cout << "Fare Description                                           Ticket $" << endl;
  cout << "--------------------------------------                     --------" << endl;
  cout << "Vehicle Under 14' (less than 168\") & Driver                 $" << VEHICLE_FARE << endl;
  cout << "Adult (age 19 - 64)                                         $" << ADULT_FARE << endl;
  cout << "Senior (age 65 & over) / Disability                         $" << SENIOR_FARE<< endl;
  cout << "Youth (age 6 - 18)                                          $" << YOUTH_FARE << endl;
  cout << "Bicycle Surcharge (included with Vehicle)                   $" << BICYCLE_SURCHARGE << endl;

  cout << endl << "Are you riding a vehicle on the Ferry (Y/N): ";
  cin >> vehicle;

  if ((vehicle == 'y') || (vehicle == 'Y')){
    totalCharge += VEHICLE_FARE;
    chargeForBikes = false;
  }
  else if ((vehicle != 'n') && (vehicle != 'n')){
    noError = false;
    cout << endl << "Error!! Invalid answer!! Please try again later!!!";
  }

  if (noError) {
    cout << endl << "How many adults? ";
    cin >> numAdults;
    if (numAdults < 0){
      noError = false;
      cout << endl << "Error!! Invalid answer!! Please try again later!!!";
    }
  }

  if (noError) {
    cout << "How many seniors? ";
    cin >> numSeniors;
    if (numSeniors < 0){
      noError = false;
      cout << endl << "Error!! Invalid answer!! Please try again later!!!";
    }
  }

  if (noError) {
    cout << "How many youths? ";
    cin >> numYouths;
    if (numYouths < 0){
      noError = false;
      cout << endl << "Error!! Invalid answer!! Please try again later!!!";
    }
  }

  if (noError && chargeForBikes) {
    cout << "How many bikes? ";
    cin >> numBikes;
    if (numBikes < 0){
      noError = false;
      cout << endl << "Error!! Invalid answer!! Please try again later!!!";
    }
  }

  totalCharge += numAdults * ADULT_FARE;
  totalCharge += numSeniors * SENIOR_FARE;
  totalCharge += numYouths * YOUTH_FARE;
  totalCharge += numBikes * BICYCLE_SURCHARGE;

  amountUntilFreeTicket = FREE_TICKET_THRESHOLD - totalCharge;

  totalPeople = numAdults + numSeniors + numYouths;

  cout << endl;

  if (noError && (totalPeople > MAX_GROUP_SIZE)) {
    noError = false;
    cout << "Uh oh!! Too many people in your group. Split into 2 groups and try again!" << endl;
  }

  if (noError) {
    cout << "Your total charge is $" << totalCharge << endl;

    if (amountUntilFreeTicket > 0) {
      cout << endl << "If you spend " << amountUntilFreeTicket << " more, you are eligible for a free adult ticket for the next trip." << endl;
    }
    else {
      cout << endl << "Congradulations, you are eligible for a free adult ticket for the next trip." << endl;
    }
  }

  cout << endl << "Thank you for using Washington State Ferries Fare Calculator!" << endl;

  return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: Washington State Ferries Fare Calculator

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

char vehicle;
int numAdults;
int numSeniors;
int numYouths;
int numBikes;

B. OUTPUT
Define the output variables including data types. 

double totalCharge;
double amountUntilFreeTicket;


C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.



if there is a vehicle:
  totalCharge += VEHICLE_FARE;

totalCharge += numAdults * ADULT_FARE;
totalCharge += numSeniors * SENIOR_FARE;
totalCharge += numYouths * YOUTH_FARE;
totalCharge += numBikes * BICYCLE_SURCHARGE;

amountUntilFreeTicket = FREE_TICKET_THRESHOLD - totalCharge;

totalPeople = numAdults + numSeniors + numYouths;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

double VEHICLE_FARE = 57.90;
double ADULT_FARE = 14.95;
double SENIOR_FARE = 7.40;
double YOUTH_FARE = 5.55;
double BICYCLE_SURCHARGE = 4.00;
double FREE_TICKET_THRESHOLD = 100.00;
int MAX_GROUP_SIZE = 20;

int totalPeople;
bool noError = true;
bool chargeForBikes = true;


display fare discrtiption

prompt vehicle >> vehicle

if ((vehicle == 'y') || (vehicle == 'Y')){
  add vehicle Fare
  chargeForBikes = false;
}
else if ((vehicle != 'n') && (vehicle != 'n')){
  noError = false;
  display invalid input
}

if (noError) {
  prompt adults >> numAdults
  if (numAdults < 0){
    noError = false;
    display invalid input
  }
}

if (noError) {
  prompt seniors >> numSeniors
  if (numSeniors < 0){
    noError = false;
    display invalid input
  }
}

if (noError) {
  prompt youth >> numYouths
  if (numYouths < 0){
    noError = false;
    display invalid input
  }
}

if (noError && chargeForBikes) {
  prompt bikes >> numBikes
  if (numBikes < 0){
    noError = false;
    display invalid input
  }
}

calculate totalCharge //exclude vehicle calculation because that was executed earlier
calculate amountUntilFreeTicket
calculate totalPeople

if totalPeople > MAX_GROUP_SIZE{
  noError = false;
  disply too many people
}

if (noError) {
  output totalCharge

  if (amountUntilFreeTicket > 0) {
    output amountUntilFreeTicket
  }
  else {
    diplay congrats on free ticket
  }
}

diplay thank you message

SAMPLE RUNS
Copied from assignment document.



Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): y

How many adults? 2
How many seniors? 1
How many youths? 0

Your total charge is $95.20

If you spend $4.80 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!



Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): a

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!



Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 2
How many seniors? 1
How many youths? 1
How many bikes? 2

Your total charge is $50.85

If you spend $49.15 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!



Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)     
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n
How many adults? -7

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!



Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 12
How many seniors? 4
How many youths? 5
How many bikes? 2

Uh oh!! Too many people in your group. Split into 2 groups and try again!

Thank you for using Washington State Ferries Fare Calculator!

*/