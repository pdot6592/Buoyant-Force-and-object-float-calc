// c2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Philip Palcsey
//CIT245 - Z01
//1/28/2021
//
//


#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

void Babylonian_square(double input) {

    double x;

    x = input / 2;

    cout << "guess  " << to_string(x) << '\n';

    double error = .001;


    while ((x - (input / x)) > error) {


        x = (x + (input / x)) / 2;

        cout << "guess " << " " << to_string(x) << '\n';


    }
    cout << '\n';
    cout << "square root function yields: " << sqrt(input) << '\n';


}




int main()
{
    cout << "Enter a number and I will apply the Babylonian square root algorithm until I am withing .001 of the correct answer.\n";
    double input;

    cin >> input;//asking for the users' number to approximate square root

    Babylonian_square(input);

    system("pause"); //call windows OS to pause 

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
