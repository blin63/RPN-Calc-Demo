//
// Created by Brendan on 2022-10-12.
//

#pragma once

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation {
public:
    //Addition operator
    static const char ADDITION_CODE = '+';

    addition_operation() : abstract_operation(ADDITION_CODE) {};
    inline ~addition_operation() override = default;

    //Do addition
    int perform(int x, int y) override {return x + y;};
};