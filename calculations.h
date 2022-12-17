#ifndef CALCULATIONS
#define CALCULATIONS

// foward declare what is needed

int run_operation(int num1, int num2, const char);

#endif

// template <typename T>
// T run_operation(T num1, T num2, char op){
//     // implement a switch to idenitify which operation to use

//     switch (op){
//         case op == '+':
//             return num1 + num2;
//         case op == '-':
//             return num1 - num2;
//         case op == '*':
//             return num1 * num2;
//         case op == '/':
//             if(num2 == 0){
//                 throw std::invalid_argument("Denominator to division cannot be 0");
//             }
//             return num1 / num2;
//         case op == '%':
//             return num1 % num2;
//         case op == '^':
//         // implement the raise functionality via recusion
//             return power(num1, num2);
//         default:
//         // TODO: can I make the displaying of the valid operations dynamic?
//             throw std::invalid_argument("Unrecognized operation: Valid operations are: +, -, /, % and ^");
//     }


// }