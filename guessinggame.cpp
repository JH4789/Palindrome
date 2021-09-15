//Setup
#include <limits>
#include <iostream>
#include <stdlib.h> 
#include <time.h>
int main() {
  //More setup
  using namespace std;
  string response;
  int number = 0;
  int guessnumber = 0;
  bool running = true;
  //Generate the first random number
  srand (time(NULL));
  number = rand() % 100 + 1;
  int count = 0;
  //Welcome Message
  cout << "Hello! In this game a random number between 1 and 100 will be generated, each round you will have a chance to guess what that number is. The program will give you a hint after each guess. GLHF\n";
  //Main game loop
  while(running == true){
    cout << "What is your guess\n";
    cin >> guessnumber;
    if(cin.fail()) {
      cout << "Enter a valid input\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max() , '\n');
      cout << "What is your guess\n";
      cin >> guessnumber;
    }
    if(guessnumber > 100) {
      cout << "Enter a valid input\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max() , '\n');
      cout << "What is your guess\n";
      cin >> guessnumber;
    }
    //High Guess
    if(guessnumber > number){
      cout << "Your guess is too high!\n";
      count = count + 1;
    }
    //Low Guess
    if(guessnumber < number){
      cout << "Your guess is too low!\n";
      count = count + 1;
    }
    //Right on
    if(guessnumber == number){
      cout << "You guessed the right number!\n";
      cout << "It took you ";
      cout << count;
      cout << " guesses to find the right number ";
      cout << " Would you like to play again? Type y for yes and n for no ";
      cin >> response;
      //Asking to play again or end game
      if(response == "y") {
        srand (time(NULL));
        number = rand() % 100 + 1;
        count = 0;
        running = true;
      }
      else {
        running = false;
      }
      
    }
  }
}
