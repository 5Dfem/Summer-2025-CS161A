// ------------- FILE HEADER -------------
// Author: 
// Assignment:
// Date:
// Description:
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 
// Participation: 
// Challenge:
// Labs:


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

using namespace std;

int main() {
    int balanceCents = 0;
    int inputCoin;
    char inputChar;
    bool isValidChar;
    bool isValidCoin = true;

    cout << "Welcome to my Coffee/Tea Vending Machine!" << endl << endl;

    while(isValidCoin) {
        cout << "Enter coins - 5, 10, or 25 only: ";
        cin >> inputCoin;

        isValidCoin = false;
        if (inputCoin == 5) {
            isValidCoin = true;
        }
        if (inputCoin == 10) {
            isValidCoin = true;
        }
        if (inputCoin == 25) {
            isValidCoin = true;
        }

        if (isValidCoin) {
            balanceCents = balanceCents + inputCoin;
        }
    }

    cout << fixed << showpoint << setprecision(2);
    cout << endl << "Your balance is $" << balanceCents / 100.0 << endl;

    cout << endl << "Please pick an option ($0.25 each):" << endl;
    cout << "C/c: Coffee" << endl;
    cout << "T/t: Tea" << endl;
    cout << "Q/q: Quit" << endl;
}




// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS

Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 0

Your balance is $0.80

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> k
Invalid Option! Please choose a valid option!
>> 9
Invalid Option! Please choose a valid option!
>> c
How many would you like?
>> f
Invalid Option!
How many would you like?
>> 2

Your total: $0.50
Your balance: $0.30
Thank you for using my Vending Machine Program!



Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0

Your balance is $0.30

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> c

How many would you like?
>> 2

Your total is $0.50
Your balance is $0.30
Not enough change!! Please add more coins.

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0

Your balance: $0.60

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> T

How many would you like?
>> 1

Your total is $0.25
Your balance is $0.35

Thank you for using my Vending Machine Program!




Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance is $0.30

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> q

Your total is $0
Your balance is $0.30

Thank you for using my Vending Machine Program!

*/