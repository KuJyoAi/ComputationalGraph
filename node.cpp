//
// Created by KuJyo on 2022/9/10.
//
#include "node.h"
#include "math.h"

double node::val() {
    if(this->_operation == NONE || this->_is_updated){
        return _val;
    }else{
        return compute(this->link.first->val(), this->link.second->val());
    }
}

void node::clear_update() {
    this->_is_updated = false;
}
double node::compute(double l, double r) {
    switch (this->_operation) {
        case ADD:
            return l+r;
        case SUB:
            return l-r;
        case MUL:
            return l*r;
        case DIV:
            return l/r;
        case SIN:
            return std::sin(l);
        case COS:
            return std::cos(l);
        case TAN:
            return std::tan(l);
        case ASIN:
            return std::asin(l);
        case ACOS:
            return std::acos(l);
        case ATAN:
            return std::tan(l);
        case SINH:
            return std::sinh(l);
        case POW:
            return std::pow(l,r);
        case EXP:
            return std::exp(l);
        case LOG:
            return std::log(r)/log(l);
        case LN:
            return std::log(l);
    }
}

//把常数转成node对象
node::node(double a) {
    this->_val = a;
    this->_operation = NONE;
}

node::node(node a, node b, int operation) {
    link.first = &a;
    link.second = &b;
    this->_operation = operation;
}