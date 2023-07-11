//
// Created by Brendan on 2022-10-12.
//

#pragma once
#include "abstract_operation.hpp"

class division_operation : public abstract_operation {
public:
    //Division operator
    static const char DIVISION_CODE = '/';

    division_operation() : abstract_operation(DIVISION_CODE) {};
    inline ~division_operation() override = default;

    //Do division
    int perform(int x, int y) override {return x / y;}
};