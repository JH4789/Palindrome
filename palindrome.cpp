//Setup
#include <iostream>
#include <cstring>
#include <string>


int main() {

  using namespace std;
  cout << "What is your string? ";
  int i = 0;
  bool equal = false;
  //Make base cstring and comparison cstring
  char str[80];
  char strcomparison[80];
  cin >> str;
  strcpy (strcomparison, str);
  int len = strlen(str);
  cout << strcomparison << endl;
  //Swap function
  for(i = 0; i < strlen(str)/2 ; i ++) {
    swap(str[i], str[len-i-1]);
  }
  //Comparison
  for(i = 0; i < strlen(str); i++) {
    if(str[i] == strcomparison[i]) {
      equal = true;
    }
    else {
      equal = false;
    }
  }
  //Output
  if(equal == true) {
    cout << "This string is a palindrome!";
  }
  else {
    cout << "This string is not a palindrome!";
  }
}
