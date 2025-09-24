#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "\t\t\t\t\t\tWelcome to guess the number game!" << "\n\nYou have to guess a number between 1 and 100. You 'll have limited choices based on the level you choose. Good Luck!" << endl;
    int level;
    char again = 'y';
    do {
    cout << "\nEnter the difficulty level: \n1 for easy!\t\t2 for medium!\t\t3 for difficult!\t\t0 for ending the game!" << endl;
    cout << "Enter the number: ";
    cin >> level;
    int times;
    if(level > 0 && level <= 3) {
        if(level == 1) {
            times = 10;
        } else if(level == 2) {
            times = 7;
        } else {
            times = 5;
        }

        cout << "You have " << times << " choices for finding the secret number between 1 and 100." << endl;

        srand(time(0));
        int secretNumber = (rand() % 100) + 1;
        int playerNumber;

        for(int i = times; i > 0; i--) {
        cout << "\nEnter the number: ";
         cin >> playerNumber;
         if(i != 1) {
             if(playerNumber < secretNumber) {
                cout << "Nope, " << playerNumber << " is not the right number\nThe secret number is greater than the number you have chosen " << i - 1 << " choices left." << endl;
                
             } else if(playerNumber > secretNumber) {
                cout << "Nope, " << playerNumber << " is not the right number\nThe secret number is lesser than the number you have chosen " << i - 1 << " choices left." << endl;
             } else {
                cout << "Well played! You won, " << playerNumber << " is the secret number\n\t\t\t\t\tThanks for playing...." << endl;
                break;
             }
         } else {
            cout << "Hard Luck, no choices left!" << endl;
         }
        }
    } else if(level == 0) {
        cout << "Game ended!" << endl;
        break;
    }
     else {
        cout << "Invalid level!" << endl;
    }
    cout << "Play again ? (y/n)" << endl;
    cin >> again;
    if(again == 'y' || agian == 'Y') {
        system("cls");
    }
} while(again == 'y' || again == 'Y');
    return 0;
}
