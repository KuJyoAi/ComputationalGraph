//
// Created by KuJyo on 2022/9/10.
//

#ifndef COMPUTATIONALGRAPH_NODE_H
#define COMPUTATIONALGRAPH_NODE_H

#define NONE 0 //数值,无操作
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4
#define SIN 11
#define COS 12
#define TAN 13
#define ASIN 17
#define ACOS 18
#define ATAN 19
#define SINH 23
#define POW 31
#define EXP 32
#define LOG 33
#define LN 34

#include "utility"

class node{
private:
    double _val;
    std::pair<node*, node*> link;
    bool _is_updated;
    int _operation;

    double compute(double l, double r);
public:

    void clear_update();

    node(double a);
    node(node a, node b,int operation);

//    node(double a, double b,int operation);
//    node(double a, node b,int operation);
//    node(node a, double b,int operation);

    double val();
};
#endif //COMPUTATIONALGRAPH_NODE_H
