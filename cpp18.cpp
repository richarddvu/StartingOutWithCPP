#include <iostream>
using namespace std;
/*
Chapter 5: Loops
Exercise 18: Rectangle display

Write a program that asks the user for two positive integers between 2 and 10
to use for the length and width of a rectangle. If the numbers are different,
the larger of the two numbers should be used for the length and the smaller for the width.
The program should then display a rectangle of this size on the screen using the character ‘X’.
For example, if the user enters either 2 5 or 5 2, the program should display the following:

XXXXX
XXXXX
*/
int main(){
    int length, width, a, b;

    cout << "Enter in a length: " << endl;
    cin >> a;
    cout << "Enter in a width: " << endl;
    cin >> b;

  //Check if numbers are differnt
  if(a>=b){
    length = a;
    width = b;
  }
  else{
      length = b;
      width = a;
    }

    for(int i=1;i<=width;i++){
      for(int j=1;j<=length;j++){
        cout << "X";
      }
    cout << endl;
    }
    return 0;
}
