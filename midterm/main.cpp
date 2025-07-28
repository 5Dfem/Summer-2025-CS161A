// ------------- FILE HEADER -------------
// Author: Henry Schaerer
// Assignment: midterm
// Date: July 24th, 2025
// Description: 
// Sources: 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: yes
// B. OUTPUT [yes/no]: yes
// C. CALCULATIONS [yes/no]: yes
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip> //used for setprecision()
#include <limits> // NOT <climits> for cin.ignore(numeric_limits<streamsize>::max(), '\n');

using namespace std;

int main() {
  string player_1_name = "";
  string player_2_name = "";
  string player_3_name = "";

  int player_1_score = 0;
  int player_2_score = 0;
  int player_3_score = 0;

  bool is_rank_1_name_used = false;
  bool is_rank_2_name_used = false;

  double average_score = 0.0;

  string rank_1_name = "";
  string rank_2_name = "";
  string rank_3_name = "";

  int rank_1_score = 0;
  int rank_2_score = 0;
  int rank_3_score = 0;

  bool is_3_way_tie = false;
  bool is_2_way_tie_for_first = false;
  bool is_2_way_tie_for_second = false;

  cout << "Welcome to the Rock Collector Championships!" << endl;

  cout << endl << "Enter player 1 name: ";
  getline(cin, player_1_name);
  cout << "How many rocks did " << player_1_name << " collect? ";
  cin >> player_1_score;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (player_1_score < 0) {
    player_1_score = 0;
    cout << "Invalid amount. 0 will be entered." << endl;
  }

  cout << endl << "Enter player 2 name: ";
  getline(cin, player_2_name);
  cout << "How many rocks did " << player_2_name << " collect? ";
  cin >> player_2_score;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (player_2_score < 0) {
    player_2_score = 0;
    cout << "Invalid amount. 0 will be entered." << endl;
  }
  cout << endl << "Enter player 3 name: ";
  getline(cin, player_3_name);
  cout << "How many rocks did " << player_3_name << " collect? ";
  cin >> player_3_score;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (player_3_score < 0) {
    player_3_score = 0;
    cout << "Invalid amount. 0 will be entered." << endl;
  }

  if (player_1_score == player_2_score && player_2_score == player_3_score) {
    // 3 way tie
    is_3_way_tie = true;
  }
  else if (player_1_score == player_2_score || player_1_score == player_3_score || player_2_score == player_3_score) {
    // 2 way tie
    rank_1_score = player_1_score;
    if (player_2_score > rank_1_score){
      rank_1_score = player_2_score;
    }
    if (player_3_score > rank_1_score){
      rank_1_score = player_3_score;
    }
    
    rank_2_score = player_1_score;
    if (player_2_score < rank_2_score){
      rank_2_score = player_2_score;
    }
    if (player_3_score < rank_2_score){
      rank_2_score = player_3_score;
    }

    if (player_1_score == rank_1_score) {
      rank_1_name = player_1_score;
    }
    if (player_1_score == rank_1_score) {
      rank_1_name = player_1_score;
    }

    if (rank_1_score == player_1_score) {
      rank_1_name = player_1_name;
      is_rank_1_name_used = true;
    }
    if (rank_1_score == player_2_score) {
      if (is_rank_1_name_used) {
        is_2_way_tie_for_first = true;
        rank_1_name = rank_1_name + " and " + player_2_name;
      }
      else {
        rank_1_name = player_2_name;
        is_rank_1_name_used = true;
      }
    }
    if (rank_1_score == player_3_score) {
      if (is_rank_1_name_used) {
        is_2_way_tie_for_first = true;
        rank_1_name = rank_1_name + " and " + player_3_name;
      }
      else {
        rank_1_name = player_3_name;
        is_rank_1_name_used = true;
      }
    }

    if (rank_2_score == player_1_score) {
      rank_2_name = player_1_name;
      is_rank_2_name_used = true;
    }
    if (rank_2_score == player_2_score) {
      if (is_rank_2_name_used) {
        rank_2_name = rank_2_name + " and " + player_2_name;
      }
      else {
        rank_2_name = player_2_name;
        is_rank_2_name_used = true;
      }
    }
    if (rank_2_score == player_3_score) {
      if (is_rank_2_name_used) {
        rank_2_name = rank_2_name + " and " + player_3_name;
      }
      else {
        rank_2_name = player_3_name;
        is_rank_2_name_used = true;
      }
    }
  }
  else {
    rank_1_score = player_1_score;
    rank_1_name = player_1_name;
    if (player_2_score > rank_1_score) {
      rank_1_score = player_2_score;
      rank_1_name = player_2_name;
    }
    if (player_3_score > rank_1_score) {
      rank_1_score = player_3_score;
      rank_1_name = player_3_name;
    }

    rank_3_score = player_1_score;
    rank_3_name = player_1_name;
    if (player_2_score < rank_3_score) {
      rank_3_score = player_2_score;
      rank_3_name = player_2_name;
    }
    if (player_3_score > rank_3_score) {
      rank_3_score = player_3_score;
      rank_3_name = player_3_name;
    }

    if (player_1_score != rank_1_score && player_1_score != rank_2_score){
      rank_2_score = player_1_score;
      rank_2_name = player_1_name;
    }
    if (player_2_score != rank_1_score && player_1_score != rank_2_score){
      rank_2_score = player_2_score;
      rank_2_name = player_2_name;
    }
    if (player_3_score != rank_1_score && player_1_score != rank_2_score){
      rank_2_score = player_3_score;
      rank_2_name = player_3_name;
    }
  }
  average_score = (player_1_score + player_2_score + player_3_score) / 3.0;

  if (is_3_way_tie) {
    cout << endl << "It is a three way tie!" << endl;
  }
  else if (is_2_way_tie_for_first) {
    cout << endl << rank_1_name <<  " are tied for first place." << endl;
    cout << rank_2_name << " is in second place!" << endl;
  }
  else if (is_2_way_tie_for_second) {
    cout << endl << rank_1_name <<  " is in first place!" << endl;
    cout << rank_2_name << " are tied for second place." << endl;
  }
  else {
    cout << endl << rank_1_name<< " is in first place!" << endl;
    cout << rank_2_name << " is in second place." << endl;
    cout << rank_3_name << " is in third place." << endl;
  }

  cout << fixed << showpoint << setprecision(2);
  cout << endl << "The average number of rocks collected by the top three players is " << average_score << " rocks!" << endl;

  cout << endl << "Congratulations Rock Collectors!" << endl;

  return 0;
}




// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT

string player_1_name;
string player_2_name;
string player_3_name;

int player_1_score;
int player_2_score;
int player_3_score;

B. OUTPUT
Define the output variables including data types. 

double average_score;

string rank_1_name;
string rank_2_name;
string rank_3_name;

int rank_1_score;
int rank_2_score;
int rank_3_score;

bool is_3_way_tie;
bool is_2_way_tie_for_first;
bool is_2_way_tie_for_second;



C. CALCULATIONS

average_score = (player_1_score + player_2_score + player_3_score) / 3.0;

D. LOGIC and ALGORITHMS

//display welcome message

//get user input

if (player_1_score == player_2_score && player_2_score == player_3_score) {
  // 3 way tie
  is_3_way_tie = true;
}
else if (player_1_score == player_2_score || player_1_score == player_3_score || player_2_score == player_3_score) {
  // 2 way tie
  rank_1_score = max(player_1_score, player_2_score, player_3_score);
  rank_2_score = min(player_1_score, player_2_score, player_3_score);
  rank_1_name = [every player with rank_1_score]; // if multiple set is_2_way_tie_for_first = true;
  rank_2_name = [every player with rank_2_score]; // if multiple set is_2_way_tie_for_second = true;
}
else {
  rank_1_score = max(player_1_score, player_2_score, player_3_score); 
  rank_1_name = [player with rank_1_score];
  rank_3_score = min(player_1_score, player_2_score, player_3_score);
  rank_3_name = [player with rank_3_score];
  rank_2_score = [player that has score not equal to rank_1_score or rank_3_score];
  rank_2_name = [player with rank_2_score];
}

// calculate average score

if (is_3_way_tie) {
  display(rank_1_name);
  display(rank_1_score);
}
else if (is_2_way_tie_for_first) {
  display(rank_1_name);
  display(rank_1_score);
  display(rank_2_name);
  display(rank_2_score);
}
else if (is_2_way_tie_for_second) {
  display(rank_1_name);
  display(rank_1_score);
  display(rank_2_name);
  display(rank_2_score);
}
else {
  display(rank_1_name);
  display(rank_1_score);
  display(rank_2_name);
  display(rank_2_score);
  display(rank_3_name);
  display(rank_3_score);
}

diplay(average_score);


SAMPLE RUNS

Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57

Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!


*/