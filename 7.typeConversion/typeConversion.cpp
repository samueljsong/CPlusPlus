#include <iostream>

// type conversion: conversion a value of one data type to another 
//                  Implicit: automatic
//                  Explicit: Precede the value with a new type (int)

int main() {
    double x = (int) 3.14;          // although the variable is double, before we assigned it we explicitly converted the type to an int.
    std::cout << x << std::endl;    // an int will truncate any decimal values making x = 3

    char y = 100;                   // this will implicitly cast 100 as a character using the ASCII conversion
    std::cout << y << std::endl;    // The number 100 -> 'd'

    // lets try and get the percentage of a quiz score

    int correctAnswers = 8;
    int totalQuestions = 10;

    double percentage = correctAnswers / (double) totalQuestions * 100;

    std::cout << "%" << percentage << std::endl;

    return 0;
}