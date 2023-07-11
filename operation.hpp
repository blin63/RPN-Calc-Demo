//
// Created by Brendan on 2022-10-12.
//

#ifndef LAB1TEMPLATE_OPERATION_HPP
#define LAB1TEMPLATE_OPERATION_HPP

class operation {
public:
    //Interface to get operator symbol, perform calculation, and remove the object when finished
    virtual char get_code() = 0;
    virtual int perform(int x, int y) = 0;
    inline virtual ~operation() = default;
};

#endif //LAB1TEMPLATE_OPERATION_HPP
