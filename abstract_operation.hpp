//
// Created by Brendan on 2022-10-12.
//

#ifndef LAB1TEMPLATE_ABSTRACT_OPERATION_HPP
#define LAB1TEMPLATE_ABSTRACT_OPERATION_HPP

#include "operation.hpp"

class abstract_operation : public operation {
private:
    //Arithmetic operator
    char operation_type;

public:
    explicit abstract_operation(char operation) {operation_type = operation;}
    inline ~abstract_operation() override = default;

    //Return the arithmetic operator used in the object
    char get_code() override {
        return operation_type;
    }
};


#endif //LAB1TEMPLATE_ABSTRACT_OPERATION_HPP
