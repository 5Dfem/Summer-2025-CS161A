// ------------- FILE HEADER -------------
// Author: Henry Schaerer
// Assignment: 1
// Date: June 24th, 2025
// Description: Payroll
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 1
// Participation: 
// Challenge:
// Labs:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: Y
// B. OUTPUT [yes/no]: Y 
// C. CALCULATIONS [yes/no]: Y
// D. LOGIC and ALGORITHMS [yes/no]: Y
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: Y
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

int main() {

  int employeeId;
  int hoursWorked;
  float hourlyRate;
  float withholdingRate;
  float grossPay;
  float withheldPay;
  float netPay;

  cout << "Welcome to my Weekly Payroll program!!" << endl;
  cout << "Enter your employee ID number (numbers only): ";
  cin >> employeeId;
  cout << "Enter number of hours worked (whole numbers): : ";
  cin >> hoursWorked;
  cout << "Enter the hourly rate: : ";
  cin >> hourlyRate;
  cout << "Enter the federal withholding rate: ";
  cin >> withholdingRate;

  grossPay = hourlyRate * hoursWorked;
  withheldPay = grossPay * (withholdingRate / 100);
  netPay = grossPay - withheldPay;

  cout << "\nYour Payroll Summary:" << endl;
  cout << "Total Gross Pay: $";
  cout << grossPay << endl;
  cout << "Federal Tax Withholding: $";
  cout << withheldPay << endl;
  cout << "Net Pay: $";
  cout << netPay << endl;
  cout << "\nThank you for using my Weekly Payroll program!!" << endl;
  
  return 0;
  
}




// ------------- DESIGN -------------
/* 
Program Name: 

Program Description: 

Design:
A. INPUT
int employeeId;
int hoursWorked;
float hourlyRate;
float withholdingRate;

B. OUTPUT
float grossPay;
float withheldPay;
float netPay;

C. CALCULATIONS
grossPay = hourlyRate * hoursWorked;
withheldPay = grossPay * (withholdingRate / 100);
netPay = grossPay - withheldPay;

D. LOGIC and ALGORITHMS
get input
run calculations
output data

SAMPLE RUNS
(Copied from assignment document)

SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!


Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!

*/