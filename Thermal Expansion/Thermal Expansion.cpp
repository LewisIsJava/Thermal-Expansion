// Thermal Expansion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double initialLengthOfMaterial, initialTemperature, temperatureChangeInCelcius, coefficientForLinearExspansion, displacementInMeters, base = 10, exponent, materialNumber;
    cout << "This program will output the linear displacement of a material based on your inputs\n";
    cout << "Please enter the initial length of the material in meters: ";
    cin >> initialLengthOfMaterial;
    cout << "Please enter the temperature change: ";
    cin >> temperatureChangeInCelcius;
    cout << "Please enter the coefficient for linear exspansion" << endl;
    cout << "Here are a few examples:" << endl;
    cout << endl;
    cout << "--------------------------" << endl;
    cout << "aluminium = 2.31 x 10 ^ -5" << endl;
    cout << "copper 1.70 * 10 ^ -5" << endl;
    cout << "Glass 8.50 * 10 ^ -6" << endl;
    cout << "Steel 1. 20 * 10 ^ -5" << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Now enter your coefficient for your material starting with the exponent(in the examples above these are the minues numbers): ";
    cin >> exponent;
    cout << "Now enter the number before the multiplication in the examnples above based on your material: ";
    cin >> materialNumber;
    
   
    
    coefficientForLinearExspansion = materialNumber * pow(base, exponent);
    displacementInMeters = coefficientForLinearExspansion * initialLengthOfMaterial  * temperatureChangeInCelcius;

   

    if (displacementInMeters > 0)
    {
        cout << "The material is expanding by " << displacementInMeters << " meters";
    }
    else
    {
        displacementInMeters = fabs(displacementInMeters);
        cout << "The material is contracting by " << displacementInMeters << " meters";
    }
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
