//
// Created by Brendan on 2022-10-12.
//
#pragma once
#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation {
public:
    //Multiplication operator
    static const char MULTIPLICATION_CODE = '*';

    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {};
    inline ~multiplication_operation() override = default;

    //Do multiplication
    int perform(int x, int y) override {return x * y;}
};