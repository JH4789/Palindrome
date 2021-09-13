#include <iostream>
#include <stdlib.h> 
#include <time.h>
int main() {
  using namespace std;
  string response;
  int number = 0;
  int guessnumber = 0;
  bool running = true;
  srand (time(NULL));
  number = rand() % 100 + 1;
  int count = 0;
  while(running == true){
    cout << "What is your guess\n";
    cin >> guessnumber;
    if(guessnumber > number){
      cout << "Your guess is too high!\n";
      count = count + 1;
    }
    if(guessnumber < number){
      cout << "Your guess is too low!\n";
      count = count + 1;
    }
    if(guessnumber == number){
      cout << "You guessed the right number!\n";
      cout << "It took you ";
      cout << count;
      cout << " guesses to find the right number ";
      cout << " Would you like to play again? Type y for yes and n for no ";
      cin >> response;
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
