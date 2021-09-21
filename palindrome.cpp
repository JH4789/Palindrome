#include <iostream>
#include <cstring>

int main() {
  int j = 0;
  using namespace std;
  cout << "What is your string?\n";
  int i = 0;
  int strcounter = 0;
  int newstrcounter = 0;
  char testing = ' ';
  bool equal = false;
  char str[80];
  char strcomparison[80];
  char newstr[80];
  cin >> str;
  
  
  memset(newstr, '\0' , 80);
  while(strcounter < strlen(str)) {
      
    if(isalpha(str[strcounter]) != 0) {
        
        newstr[newstrcounter] = toupper(str[strcounter]);
        newstrcounter++;
    }
      strcounter++;
  }
    
    
int len = strlen(newstr);
    
    
   
strcpy(strcomparison, newstr);
 
  
 
  
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
  if(equal == true) {
    cout << "This string is a palindrome!";
  }
  else {
    cout << "This string is not a palindrome!";
  }
}
