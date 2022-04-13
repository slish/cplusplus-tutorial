// YoutubeTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    float taxRate;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    cout << "Please enter your tax rate: ";
    cin >> taxRate;
    taxRate = taxRate / 100;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary before tax is " << monthlySalary<<endl;
    cout << "Your monthly salary after tax is " << monthlySalary * (1-taxRate) << endl;
    cout << "In 10 years you will earn " << annualSalary * 10;

    char character = 'a';

    system("pause>0");
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
