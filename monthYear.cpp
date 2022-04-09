// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Apr 1st, 2022
//  This program asks the user to enter a number. It then tells them
// what month the number corresponds to.


#include <iostream>

int main() {
  // declare variable
  int month;
  int year;
  
  // ask the user for the month
  std::cout << "Enter a month: ";
  std::cin >> month;

  // ask the user for a year 
  std::cout << "Enter a year: ";
  std::cin >> year;

  // state the month selected as a string
  switch (month) {
    case 1 :
    std::cout << "January " << year << " has 31 days.";
    break;
   
    case 2 :
    std::cout << "Febuary " << year << " has 30 days.";
    break;

    case 3 :
    std::cout << "March " << year << " has 31 days.";
    break;

    case 4 :
    std::cout << "April " << year << " has 30 days.";
    break;

    case 5 :
    std::cout << "May " << year << " has 31 days.";
    break;

    case 6 :
    std::cout << "June " << year << " has 30 days.";
    break;

    case 7 :
    std::cout << "July " << year << " has 31 days.";
    break;

    case 8 :
    std::cout << "August " << year << " has 31 days.";
    break;

    case 9 :
    std::cout << "September " << year << " has 30 days.";
    break;
    
    case 10 :
    std::cout << "October " << year << " has 31 days.";
    break;

    case 11 :
    std::cout << "November " << year << " has 30 days.";
    break;

    case 12 :
    std::cout << "December " << year << " has 31 days.";
    break;

    //  handle the error case
     default :
    std::cout << "Error, " << month << " does not represent a month or year.\n";
  }
}