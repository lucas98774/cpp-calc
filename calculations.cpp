#include <iostream>
#include <map>

// define valid operations
char operations[] = {'+', '-', '*', '+', '^', '%'};
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


template <typename T>
T run_operation(T num1, T num2, std::string* operation){
    // implement a switch to idenitify which operation to use
    switch (op){
        case op == '+':
            return num1 + num2;
        case op == '-':
            return num1 - num2;
        case op == '*':
            return num1 * num2;
        case op == '/':
            if(num2 == 0):
                throw std::invalid_argument("Denominator to division cannot be 0")
            return num1 / num2;
        case op == '%':
            return num1 % num2;
        case op == '^':
        // implement the raise functionality via recusion
            return power(num1, num2);
        default:
        // TODO: can I make the displaying of the valid operations dynamic?
            throw std::invalid_argument("Unrecognized operation: Valid operations are: +, -, /, % and ^")
    }


}