//
// Created by Brendan on 2022-10-12.
//

#pragma once
#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation {
public:
    //Subtraction operator
    static const char SUBTRACTION_CODE = '-';

    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {};
    inline ~subtraction_operation() override = default;

    //Do subtraction
    int perform(int x, int y) override {return x - y;}
};