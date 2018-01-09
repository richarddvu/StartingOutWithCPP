#include <iostream>
#include <iomanip>
using namespace std;

/*
Chapter 5: loops
exercise 17: Hotel Suite occupancy

Write a program that calculates the occupancy rate of the 120 suites (20 per floor)
located on the top 6 floors of a 15-story luxury hotel.
These are floors 10–12 and 14–16 because, like many hotels,
there is no 13th floor. Solve the problem by using a single loop
that loops once for each floor between 10 and 16 and, on each iteration,
asks the user to input the number of suites occupied on that floor.
Use a nested loop loop to validate that the value entered is between 0 and 20.
After all the iterations, the program should display how many suites the hotel has,
 how many of them are occupied, and what percentage of them are occupied.
*/

int main(){
  const int suite = 120;
  int input;
  int sum = 0;
  for(int floors = 10; floors <=16;floors++){
    if(floors == 13){
      continue;
    }
      do{
        //now get input from users
        cout << "Enter in number of suite for floor " << floors << endl;
        cin >> input;
        //validate if input is between 0 - 20
        if(input<0 || input > 20){
          cout << "Error! Invalid answer. "
          << "Enter in a valid answer between 1-20!" << endl;
        }
      }while(input<0 ||input > 20);
      sum = sum + input;
  }
  double percentage = suite / sum;
  cout << "Total number of suites occupied is: " << sum << endl;
  cout << "Total percentage of occupied suites is: " << percentage << "%"<< endl;
  return 0;
}
