// Body Mass Index.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File Name: Body Mass Index
GitHub URl: https://github.com/omr24100/Body-Mass-Index.git
Programmer: Olivia Ruiz
Date: 2/26/25
Requirements:write a program 
that calculates and display a persons body mass index. The BMI is often used to determine whether a person is overweight or underweight for his 
or her height. A person BMI is calculated with the following. BMI= weight*703/height^2. Where weight is measured in pounds and height is measured in inches.
The program should display a message indicating the person has optimal weight, is underweight, or is overweight. A persons weight is considered to be underweight. 
If the BMI value is greater than 25 the person is considered overweight. 
*/

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
  
    float weight, height, bmi;

  
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    cout << "Enter your height in inches: ";
    cin >> height;

    
    bmi = (weight * 703) / pow(height, 2);  

    
    cout << "Your BMI is: " << bmi << endl;

    
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "You have an optimal weight." << endl;
    }
    else if (bmi >= 25) {
        cout << "You are overweight." << endl;
    }

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
