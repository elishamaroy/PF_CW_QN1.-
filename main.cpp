#include <iostream>
using namespace std;
int main() {
    cout << "\x1B[3m This program is designed to exhibit the positive divisors of  positive integers supplied by you.\x1B[0m \n";
    cout << "\x1B[3m The program will repeatedly prompt you to enter a positive integer. Each time you enter a  positive integer, the program will print all the divisors of your  integer in a column and in decreasing order. \x1B[0m\n";
    cout <<"\n";
    while (true) {
        int num;
        cout << "Please enter a positive integer: ";
        cin >> num;

while(num <= 0)
         {
            cout <<num<< " is not a positive\n";
            cout << "Please enter a positive integer: ";
            cin >> num;
            for (int a = num; a >= 1; --a) {
            if (num % a == 0) {
                cout << a <<"\n";
    }}}
if(num>0){

        for (int a = num; a >= 1; --a) {
            if (num % a == 0) {
                cout << a <<"\n";
            }
        }}

         char answer;
         cout << "Would you like to see the divisors of another integer (Y/N)? ";
         cin >>answer;
    if (answer == 'Y' || answer == 'y') {
        cout << "Please enter a positive integer: ";
        int num;
        cin >> num;

while(num <= 0)
         {
            cout <<num<< " is not a positive\n";
            cout << "Please enter a positive integer: ";
            cin >> num;
            for (int a = num; a >= 1; --a) {
            if (num % a == 0) {
                cout << a <<"\n";
    }}}



            }



        else if (answer == 'N' || answer == 'n') {
        cout << "ended operation\n";    break;
    }



  else if(answer!='y'|| answer!='n'){
        cout <<"Please respond with Y (or y) for yes and N (or n) for no.\n";
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >>answer;
        if (answer == 'Y' || answer == 'y') {
        cout << "Please enter a positive integer: ";
        cin >> num;

        for (int a = num; a >= 1; --a) {
            if (num % a == 0) {
                cout << a <<"\n";
            }
        }

    } else if (answer == 'N' || answer == 'n') {
        cout << "ended operation\n";    break;
    }

    }



        }







  return 0;

    }


