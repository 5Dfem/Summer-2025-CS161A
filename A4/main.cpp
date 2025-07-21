// ------------- FILE HEADER -------------
// Author: Henry Schaerer
// Assignment: 4
// Date: June 7th, 2025
// Description: check if two strings match, or if one string is a substring of another
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 4
// Participation: 81%
// Challenge: 70%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
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

using namespace std;

int main() {
  string str1;
  string str2;
  std::size_t str1_in_str2;
  std::size_t str2_in_str1;

  cout << "Welcome to the Phrases and Subphrases program!" << endl;

  cout << endl << "Enter Phrase 1: ";
  getline(cin, str1);
  cout << "You entered: " << str1 << endl;
  
  cout << endl << "Enter Phrase 2: ";
  getline(cin, str2);
  cout << "You entered: " << str2 << endl;


  str1_in_str2 = str2.find(str1);
  str2_in_str1 = str1.find(str2);

  if (str1_in_str2 != string::npos && str2_in_str1 != string::npos) {
    cout << endl << "Both phrases match" << endl;
  }
  else if (str1_in_str2 != string::npos){
    cout << endl << str1 << " found in " << str2 << endl;
    cout << str2.substr(str1_in_str2) << endl;
  }
  else if (str2_in_str1 != string::npos){
    cout << endl << str2 << " found in " << str1 << endl;
    cout << str1.substr(str2_in_str1) << endl;
  }
  else {
    cout << endl << "No match" << endl;
  }

  cout << endl << "Thank you for using my program!" << endl;

  return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: Phrases and Subphrases program

Program Description: check if two strings match, or if one string is a substring of another

Design:

A. INPUT
string str1;
string str2;


B. OUTPUT
int str1_in_str2;
int str2_in_str1;

C. CALCULATIONS


D. LOGIC and ALGORITHMS

//ask user for str1 & str2



if str1_in_str2 != string::npos && str2_in_str1 != string::npos:
  // matching
else if str1_in_str2 != string::npos:
  // str1 in str2
else if str2_in_str1 != string::npos:
  // str2 in str1
else
  // no matches


// goodbye message

SAMPLE RUNS

Welcome to the Phrases and Subphrases program!

Enter Phrase 1: truck
You entered: truck
Enter Phrase 2: firetruck is here
You entered: firetruck is here

truck is found in firetruck is here
truck is here

Thank you for using my program!



Welcome to the Phrases and Subphrases program!

Enter Phrase 1: the green grass grows
You entered: the green grass grows
Enter Phrase 2: green grass
You entered: green grass

green grass is found in the green grass grows
green grass grows

Thank you for using my program!



Welcome to the Phrases and Subphrases program!

Enter Phrase 1: He was between a rock and a hard place
You entered: He was between a rock and a hard place
Enter Phrase 2: rock
You entered: rock

rock is found in He was between a rock and a hard place
rock and a hard place

Thank you for using my program!


*/