#include <iostream>
#include <cstring>

int main() {
  int j = 0;
  using namespace std;
  cout << "What is your string? ";
  int i = 0;
  int strcounter = 0;
  int newstrcounter = 0;
  
  bool equal = false;
  char str[80];
  char strcomparison[80];
  cin >> str;
  char newstr[80];
  memcpy(newstr, 0 , 80);
  while(strcounter < 80) {
    if(isalpha(str[strcounter] != 0)) {
	newstr[newstrcounter] = str[strcounter];
	newstrcounter = newstrcounter + 1;
    }

      strcounter = strcounter + 1;
  }
  cout << newstr << endl;
  
  strcpy (strcomparison, newstr);
  
  int len = strlen(str);
  cout << strcomparison << endl;
  
  for(i = 0; i < strlen(str)/2 ; i ++) {
    swap(str[i], str[len-i-1]);
  }
  for(i = 0; i < strlen(str); i++) {
    if(str[i] == strcomparison[i]) {
      equal = true;
    }
    else {
      equal = false;
    }
  }
  if(equal == true) {
    cout << "This string is a palindrome!";
  }
  else {
    cout << "This string is not a palindrome!";
  }
}
