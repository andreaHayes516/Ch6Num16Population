/************************************************
** Author: Andrea Hayes
** Date: April 10, 2020
** Purpose: Display size of population over time
** Input: starting size, annual birth and death rate, number of years
** Processing: function and formula for rate
** Output: Display of population for any number of years
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
double sum(double, double, double); // Function header
int main() {

    int prevPop, birth, death, years, newPop; // Variables

    cout << "What is the starting size of the population? "; // Get user input and input validation
    cin >> prevPop;
    if (prevPop < 2)
    {
        cout << "Starting size must be larger than 2.";
    }
    cout << "What is the birth rate? (Enter as percentage.): ";
    cin >> birth;
    if (birth < 0)
    {
        cout << "Birth rate cannot be negative.";
    }
    cout << "What is the death rate?(Enter as percentage.): ";
    cin >> death;
    if (death < 0)
    {
        cout << "Death rate cannot be negative.";
    }
    cout << "How many years do you want to display? ";
    cin >> years;
    if (years < 1)
    {
        cout << "Year cannot be negative.";
    }
    for (int y=1; y<=years; y++) // Loop for population and years
    {
        newPop = sum(prevPop, birth, death); // Call function

        cout << "The population is: " << newPop;
        cout << endl;
        prevPop = newPop;
    }
    return 0;
}
double sum(double prevPop, double birth, double death) // Function for population formula
{
    int newPop;
    newPop = prevPop + ((birth/100) * prevPop) - ((death/100) * prevPop);
    return newPop;
}