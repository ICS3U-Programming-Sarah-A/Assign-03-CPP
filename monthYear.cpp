// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Apr 11th, 2022
//  This program asks the user to enter a number for a month & year. 
// It then tells you  what month the number corresponds to and how many days are
// in that month.


#include <iostream>



int main() {
  // declare variable
  int month;
  int year;
  int numberOfDays;
  std:: string yearAsString;
  std:: string monthAsString;

  // ask the user for the month
  std::cout << "Enter a month (i.e 1 represents January): ";
  std::cin >> monthAsString;

  // ask the user for a year
  std::cout << "Enter a year: ";
  std::cin >> yearAsString;

  // convert int to string in order to error check
  try {
     month = std::stoi(monthAsString);
     year = std::stoi(yearAsString);
    if (year > 1) {
      if (month > 12 || month < 1) {
        std::cout << "Please enter a number that represents a month";
        std::cout << "" << std::endl;
      }
     
      // checks to see if user month entered corresponds to a month
      switch (month) {
      case 1 :
      std::cout << "January " << year << " has 31 days.";
      break;

    // check for leap year
      case 2 :
      if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
                      numberOfDays = 29;
                  } else {
                      numberOfDays = 28;
                  }
                  std::cout << "February " << year << " has "
                             << numberOfDays <<
                             " days";
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
      std::cout << "Invalid, " << month << " does not represent a month.\n";
    }
    } else {
      std::cout << "Please enter a positive number";
      // std::cout << "Invalid.";
      std::cout <<"" << std::endl;
    }
  } catch (std::invalid_argument) {
    std::cout << "Please enter a number";
  }
}
