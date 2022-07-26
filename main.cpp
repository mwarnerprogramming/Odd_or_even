/**
 * @file main.cpp
 * @author Michael Warner (michaelwarnerprogramming@gmail.com)
 * @brief Simple "odd or even" title. 
 * @version 0.1
 * @date 2022-07-25
 * 
 * 
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main() {

    int usernum;

    cout << "Enter a number to check if it's odd or even:\n";
    cin >> usernum;

    if ( usernum % 2 == 0 ) { cout << "Number is even."; }
    else { cout << "Number is odd."; }

    return 0;
}