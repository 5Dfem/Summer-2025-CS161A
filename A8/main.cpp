// ------------- FILE HEADER -------------
// Author: Henry Schaerer
// Assignment: 8
// Date: Augest 23rd, 2025
// Description: Grade Calculations using Reference Parameter
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 8
// Participation: 100%
// Challenge: 100%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: no
// B. OUTPUT [yes/no]: no
// C. CALCULATIONS [yes/no]: no
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip> //used for setprecision()
#include <limits> // NOT <climits> for cin.ignore(numeric_limits<streamsize>::max(), '\n');

using namespace std;

void welcomeMessage();
int readBoundedInt(string prompt, int min, int max); 
int readInt(string prompt); 
void readScore(string prompt, double& num);
double assignAverage(int numAssigns);
void getInput(double &midtermScore, double &finalExamScore);
double calcFinalScore(double assignAvg, double midterm, double final);
void calcLetterGrade(double finalScore, char &letter);

int main() {
  int numAssignments;
  double averageAssignmentScore;
  double midtermExamScore;
  double finalExamScore;
  double finalClassScore;
  char letterGrade;

  welcomeMessage();

  numAssignments = readBoundedInt("Enter the number of assignments (0 to 10): ", 0, 10);
  averageAssignmentScore = assignAverage(numAssignments);

  getInput(midtermExamScore, finalExamScore);

  finalClassScore = calcFinalScore(averageAssignmentScore, midtermExamScore, finalExamScore);

  calcLetterGrade(finalClassScore, letterGrade);

  cout << fixed << showpoint << setprecision(1);
  cout << "Your Final Numeric score is " << finalClassScore << endl;
  cout << "Your Final Grade is " << letterGrade << endl;
  cout << "Thank you for using my Grade Calculator!" << endl;

  return 0;
}


void welcomeMessage() {
  // Welcome message
  cout << "Welcome to my Final Grade Calculator!" << endl;
  cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
  cout << "The number of assignments must be between 0 and 10." << endl;
  cout << "All scores entered must be between 0 and 4." << endl;
  return;
}

int readBoundedInt(string prompt, int min, int max) {
  // This function reads ints that need to be in a spesified range
  // it will prompt the user again if the input is not in that range
  int userInt = readInt(prompt);

  while (userInt < min || userInt > max) {
    cout << "Invalid input! Please try again!!" << endl;
    userInt = readInt(prompt);
  }
  
  return userInt;
}

int readInt(string prompt) {
  // This function should be used any time you read any integers from the user. 
  // Use this function to read the number of Assignments from the user.
  int userInt;
  cout << prompt;
  cin >> userInt;

  while(!cin) {
    cout << "Invalid input! Please try again!!" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << prompt;
    cin >> userInt;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  return userInt;
}

void readScore(string prompt, double& num) {
  // to read all the scores from the user.
  // Any time you read a score you must call this function. 
  // The function must do data validation to make sure it is a numeric value, 
  // and that it is within the range of 0 to 4 inclusive.
  cout << prompt;
  cin >> num;

  while(!cin || num < 0 || num > 4) {
    cout << "Invalid input! Please try again!!" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << prompt;
    cin >> num;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  return;
}

double assignAverage(int numAssigns) {
  // to read the Assignment scores from the user. 
  // This function must call readScore every time you read an Assignment score. 
  // You must use a for loop to do this. 
  // Then calculate and return the average score.
  double currentScore = 0;
  double totalScore = 0;
  double averageScore = 0;
  string prompt = "";
  for (int i = 1; i <= numAssigns; i++) { // uses 1 indexing to simplify latter code
    prompt = "Enter score " + std::to_string(i)  + ": ";
    readScore(prompt, currentScore);
    totalScore += currentScore;
  }
  averageScore = totalScore / numAssigns;
  return averageScore;
}

void getInput(double &midtermScore, double &finalExamScore) {
  // that calls the readScore() function and reads the 2 exam scores.
  readScore("Enter your midterm exam score: ", midtermScore);
  readScore("Enter your final exam score: ", finalExamScore);
  return;
}

double calcFinalScore(double assignAvg, double midterm, double final) {
  // that takes the Assignment average score, the midterm score and the final exam score, 
  // and calculates the final numerical score based on the appropriate weights for assignments and exams. 
  // The assignments are weighted at 60%, the midterm and final exams are weighted at 20% each.
  double classScore;
  classScore = assignAvg * 0.6 + midterm * 0.2 + final * 0.2;
  return classScore;
}

void calcLetterGrade(double finalScore, char &letter){
  // that takes the finalScore by value and a character for the letter grade by reference. 
  // Print the letter grade in main().
  if (finalScore > 4) {
    letter = '?'; // ? is to show error becuase the final score shouldn't be greater than 4
  }
  else if (finalScore >= 3.3) {
    letter = 'A';
  }
  else if (finalScore >= 2.8) {
    letter = 'B';
  }
  else if (finalScore >= 2.0) {
    letter = 'C';
  }
  else if (finalScore >= 1.2) {
    letter = 'D';
  }
  else if (finalScore >= 0) {
    letter = 'F';
  }
  else {
    letter = '?'; // ? is to show error becuase the final score shouldn't be less than 0
  }
  
  return;
}



// ------------- DESIGN -------------
/* 
Program Name: Grade Calculations using Reference Parameter

Program Description: calculate the final numerical score and the letter grade for a student in our class

Design:

A. INPUT



B. OUTPUT



C. CALCULATIONS


D. LOGIC and ALGORITHMS

display welcome message

get assignment scores
get midterm score
get final score

calculate average assignment score
calculate final score
calculate letter grade

display grades

display goodbye



SAMPLE RUNS

Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 6
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 3.3
Enter score 5: 3.1
Enter score 6: 2.5
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.4
Your Final Grade is A
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 3
Enter score 1: 3 
Enter score 2: 4 
Enter score 3: 2.5 
Enter your midterm exam score: 2.5
Enter your final exam score: 2
Your Final Numeric score is 2.8
Your Final Grade is B
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 12
Illegal Value! Please try again!!
Enter the number of assignments (0 to 10): 5
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 5.5
Illegal Score! Please try again!
Enter score 4: 3.5
Enter score 5: 3.1
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.5
Your Final Grade is A
Thank you for using my Grade Calculator!

*/