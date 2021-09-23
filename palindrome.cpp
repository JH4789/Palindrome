#include <iostream>
#include <cstring>

int main() {
  using namespace std;
  cout << "What is your string?\n";
  int i = 0;
  int strcounter = 0;
  int newstrcounter = 0;
  bool equal = false;
  char str[80];
  char strcomparison[80];
  char newstr[80];
  cin.getline(str, 80);
  //Make the array that will be missing the spaces
  memset(newstr, '\0' , 80);
  while(strcounter < strlen(str)) {
    //Check for non alphabet non space characters
    if(isalpha(str[strcounter]) != 0 && str[strcounter] != ' ') {
        
        newstr[newstrcounter] = toupper(str[strcounter]);
        newstrcounter++;
    }
      strcounter++;
  }
  //Can be more elegant but the following code needs it
  int len = strlen(newstr);
  //Preserves unswapped newstr
  strcpy(strcomparison, newstr);
  //Swaps newstr
  for(i = 0; i < strlen(newstr)/2 ; i ++) {
    swap(newstr[i], newstr[len-i-1]);
  }
  for(i = 0; i < strlen(newstr); i++) {
    if(newstr[i] == strcomparison[i]) {
      equal = true;
    }
    else {
      equal = false;
    }
  }
  //Final outputs
  if(equal == true) {
    cout << "This string is a palindrome!";
  }
  else {
    cout << "This string is not a palindrome!";
  }
}
