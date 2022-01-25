
#include <iostream>
#include <string>
using namespace std;


int main () {

  //making some variables
  string text;
  int c;

      //This part takes the input of your sentence
      cout << "Please enter your text: ";
      getline(cin, text);
      //This part takes the input on how many times you want the sentences to be repeated
      cout << "Enter the number of times you want your text to be repeated: ";
      cin >> c ;

//This part gives the output
  for (int a = 1; a <= c; a++) {

    cout << text << "\n";

  }

  return 1;

}
