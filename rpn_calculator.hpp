//
// Created by Brendan on 2022-10-12.
//

#pragma once

#include "abstract_operation.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include <stack>
#include <sstream>
#include <iostream>

using namespace std;

class rpn_calculator {
private:
    //Private data members
    int result{};
    std::stack<int> myStack;

    //Determines the correct operator to use based on char passed in
    static operation* operation_type(char op) {
        switch(op) {
            case addition_operation::ADDITION_CODE:
                return new addition_operation();
            case subtraction_operation::SUBTRACTION_CODE:
                return new subtraction_operation();
            case multiplication_operation::MULTIPLICATION_CODE:
                return new multiplication_operation();
            default:
                return new division_operation();
        }
    }

    //Does the appropriate operation
    void perform(operation* ptr) {
        //x and y variables are flipped to ensure that the correct values
        //are assigned to the correct operands
        //Pop the stack each time the value is added to either values
        int y = myStack.top();
        myStack.pop();
        int x = myStack.top();
        myStack.pop();

        //Calculate the result from a pointer of the correct perform operation
        //then push the result to the stack for further calculations
        result = ptr->perform(x,y);
        myStack.push(result);
    }

public:
    //Process the string inputted by the user using the input string stream
    int process_formula(const string& formula) {
        istringstream iss(formula);
        string operand;

        while (iss >> operand) {
            istringstream iss2(operand);
            int tmp;

            //Push to stack if int, else do calculation on values in stack
            if (iss2 >> tmp) {
                myStack.push(tmp);
            }
            else {
                perform(operation_type(operand[0]));
            }
        }

        //Return the result from the stack and empty the stack
        result = myStack.top();
        myStack.pop();

        return result;
    }
};
