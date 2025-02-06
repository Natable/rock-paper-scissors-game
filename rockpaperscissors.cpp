#include <iostream>
#include <chrono>

using namespace std;

int main (){

    bool run = true;
    const string machineChoice [3] = {"Rock", "Paper", "Scissors"};
    string userChoice;

    cout << "Rock Paper Scissors Game by Nat cuz why not?\n";

    while (run) {
    cout << "Enter your choice (Rock, Paper, Scissors): ";
    cin >> userChoice;
    if (userChoice == "0"){
        break;
    }
    srand(time(0));

    string random = machineChoice[rand () % 3];

    cout << "Computer's choice was: " << random << endl;

    if ((userChoice == "Paper" || userChoice == "paper") && (random == "Rock")){
        cout << "You won!" << endl;
        run = false;
    }
    else if ((userChoice == "Paper" || userChoice == "paper") && (random == "Paper")){
        cout << "You tied!" << endl;
        run = false;
    }
    else if ((userChoice == "Paper" || userChoice == "paper") && (random == "Scissors")){
        cout << "You lost!" << endl;
        run = false;
    }
    else if ((userChoice == "Rock" || userChoice == "rock") && (random == "Rock")){
        cout << "You tied!" << endl;
        run = false;
    }
    else if ((userChoice == "Rock" || userChoice == "rock") && (random == "Paper")){
        cout << "You lost!" << endl;
        run = false;
    }
    else if ((userChoice == "Rock" || userChoice == "rock") && (random == "Scissors")){
        cout << "You won!" << endl;
        run = false;
    }
    else if ((userChoice == "Scissors" || userChoice == "scissors") && (random == "Rock")){
        cout << "You lost!" << endl;
        run = false;
    }
    else if ((userChoice == "Scissors" || userChoice == "scissors") && (random == "Paper")){
        cout << "You won!" << endl;
        run = false;
    }
    else if ((userChoice == "Scissors" || userChoice == "scissors") && (random == "Scissors")){
        cout << "You tied!" << endl;
        run = false;
    }
    else{
        cout << "Invalid input!" << endl;
    }

    }

    return 0;
}
