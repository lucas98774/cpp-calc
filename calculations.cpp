#include <iostream>
#include <map>

// define valid operations
char operations[6] = {'+', '-', '*', '+', '^', '%'};
// FIXME: consider using a map for the operations so you can give them string names instead of just a list
// std::map<std::string, char> ops;

// define function template here

int power(int x, int y){
    // raise x^y via recusion

    // check if raising to zero power
    if (y==0) {
        return 1;
    } else if (y==1) {
        // base case
        return x;
    }
    
    return x * power(x, y-1);

}


int run_operation(int num1, int num2, char op){
    // implement a switch to idenitify which operation to use
    const char operation = op;

    switch (op){
        case '+':
            std::cout << "addition detected \n" << "Number 1: " << num1 << "Number 2:" << num2 << std::endl;
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if(num2 == 0){
                throw std::invalid_argument("Denominator to division cannot be 0");
            }
            return num1 / num2;
        case '%':
            return num1 % num2;
        case '^':
        // implement the raise functionality via recusion
            return power(num1, num2);
        default:
        // TODO: can I make the displaying of the valid operations dynamic?
            throw std::invalid_argument("Unrecognized operation: Valid operations are: +, -, /, % and ^");
    }


}