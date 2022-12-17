#include <iostream>
#include "calculations.h"

// define helpers to handle user input
int* prompt_number(){

    bool valid_input = false;
    int num1;
    int num2;
    do {
        std::cout << "Please enter a valid integer: ";
        std::cin >> num1;
        std::cout << "Please enter another valid integer (NOTE order of operations apply here): ";
        std::cin >> num2;

        // perform validation of the inpout here ...
        valid_input = true;

    } while( !valid_input );

    int* output = new int[2] {num1, num2};

    // debug statement
    // std::cout << "Number 1: " << output[0] << " Number 2: " << output[1] << std::endl;
    
    return output;
}

char prompt_operation(){

    bool valid_input = false;
    char operation;

    do {
        std::cout << "Please enter an operation: ";
        std::cin >> operation;

        // do some validation of the input here
        valid_input = true;
    } while (!valid_input);

    // debug statement
    // std::cout << "Operation: " << operation;
    return operation;
}
// prompt user for input
//NOTE: 1. argc stands for argument count ... also this will also be at least 1
// 2. argv stands for argument values ... the first element is always the program name
int main( int argc, char** argv){
    // 1. prompt user for input
    // 2. validate input
    int *numbers = prompt_number();
    const char operation = prompt_operation();

    //debug statement
    std::cout << "Number 1: " << numbers[0] << " Number 2: " << numbers[1] << std::endl;

    // 3. perform operation
    int result = run_operation(numbers[0], numbers[1], operation);

    // display result
    std::cout << "Result: " << result << std::endl;

    // delete the memory 
    delete[] numbers;

    return 0;  // this exit code means success
}