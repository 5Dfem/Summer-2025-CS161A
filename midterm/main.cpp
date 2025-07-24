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

using namespace std;

int main() {
  string player_1_name;
  string player_2_name;
  string player_3_name;

  int player_1_score;
  int player_2_score;
  int player_3_score;

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

average_score = (player_1_score + player_1_score + player_1_score) / 3.0;

D. LOGIC and ALGORITHMS

//display welcome message

//get user input

if (player_1_score == player_2_score && player_2_score == player_3_score) {
  // 3 way tie
  rank_1_score = player_1_score;
  is_3_way_tie = true;
  rank_1_name = format(player_1_name, player_2_name, player_3_name);
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